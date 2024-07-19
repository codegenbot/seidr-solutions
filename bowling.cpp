int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            score += 10 + (stoi(s.substr(i + 1, 2)) - 0) * 2;
            i += 3;
        } else {
            int thisFrame = 0;
            for (int j = i; j < s.length() && j <= i + 1; j++) {
                if (s[j] == 'X' || s[j] == '/') break;
                thisFrame = thisFrame * 10 + (s[j] - '0');
            }
            score += thisFrame;
        }
    }
    return score;
}