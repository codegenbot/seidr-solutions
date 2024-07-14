int bowlingScore(string str) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (str[i] == 'X') {
            score += 30;
        } else if (isdigit(str[i])) {
            int frameScore = 0;
            int j = i + 1;
            while (j <= 11) {
                if (j > 11 || str[j-1] != '/') {
                    frameScore += (str[j-1] - '0');
                } else {
                    break;
                }
                j++;
            }
            score += frameScore;
        } else {
            int strike = 10 + bowlingScore(str.substr(i+2));
            score += strike;
        }
    }
    return score;
}