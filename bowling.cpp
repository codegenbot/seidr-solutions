int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            score += 10 - (i + 1);
            break;
        }
        else if (isdigit(s[i])) {
            roll1 = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                roll2 = s[i+1] - '0';
                score += roll1 + roll2;
                i++;
            } else {
                score += roll1;
            }
        }
    }
    return score;
}