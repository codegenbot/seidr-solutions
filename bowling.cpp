int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, frameScore;

    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') { // strike
            score += 10 + nextTwoRolls(s, i);
        } else if (isdigit(s[i])) { // non-strike
            roll1 = s[i] - '0';
            frameScore = roll1;
            if (i < 8 && s[i+1] == '/') {
                frameScore += s[i+2] - '0';
                i++;
            } else if (i == 8 && s[i+1] != '/') {
                frameScore += s[i+1] - '0';
            } else if (i < 8 && s[i+1] != '/') {
                frameScore += s[i+1] - '0' + s[i+2] - '0';
                i++;
            }
            score += frameScore;
        }
    }

    return score;
}

int nextTwoRolls(string s, int i) {
    if (i < 8 && s[i+1] == '/') {
        return s[i+2] - '0' + s[i+3] - '0';
    } else if (i < 9) {
        return s[i+1] - '0' + s[i+2] - '0';
    } else {
        return 10;
    }
}