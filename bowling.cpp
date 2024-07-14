int bowlingScore(string s) {
    int score = 0;
    bool spare = false;
    bool strike = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            strike = true;
            score += 10 + bonus(s.substr(i+1));
        } else if (s[i] == '/') {
            spare = true;
            score += 10 + bonus(s.substr(i+1));
        } else if (s[i].isdigit()) {
            int framescore = s[i] - '0';
            if (!strike && !spare) {
                score += framescore;
            }
        }
    }

    return score;
}

int bonus(string s) {
    int total = 0;
    for (char c : s) {
        if (c == 'X') {
            total += 10;
        } else if (c == '/') {
            total += 10 - s[0] - '0';
            break;
        } else {
            total += c - '0';
        }
    }
    return total;
}