int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + stoi(s.substr(i+1, 2));
        } else {
            int frameScore = 0;
            for (int j = i; j < 11 && j <= i+1; ++j) {
                if (j < 11) {
                    if (s[j] == 'X') {
                        frameScore += 30;
                        break;
                    } else if (s[j] == '/') {
                        int pinsLeft = stoi(s.substr(j+1, 2));
                        frameScore += 10 + pinsLeft/10 * 10;
                        break;
                    }
                    frameScore += s[j] - '0';
                } else {
                    frameScore += s[j] - '0';
                }
            }
            score += frameScore;
        }
    }
    return score;
}