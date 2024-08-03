int bowlingScore(string s) {
    int score = 0;
    bool spare = false;
    bool strike = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            strike = true;
            score += 10 + bonus(s.substr(i+1));
        } else if (s[i] == '/') {
            spare = true;
            score += 10 + bonus(s.substr(i+2));
        } else {
            int roll = s[i] - '0';
            score += roll;
            if (!strike && !spare) {
                if (i < s.length() - 1 && s[i+1] == '/') {
                    spare = true;
                }
            }
        }
    }
    return score;
}

int bonus(string s) {
    int score = 0;
    for (char c : s) {
        score += c - '0';
    }
    if (s.length() > 1 && s[0] == '/' && s[1] == '/') {
        return 10;
    } else if (s.length() > 2 && s[0] == '/' && s[1] == 'X') {
        return 15;
    } else if (s.length() > 3 && s.substr(0, 2) == "XX") {
        return 20;
    }
    return score;
}