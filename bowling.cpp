int bowlingScore(string s) {
    int score = 0;
    bool lastFrameStrike = false;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') { // strike
            score += 10 + (i < 9 ? 10 : 0);
        } else if (s[i] == '/') { // spare
            int j = i + 1;
            while (j < 11 && s[j] != 'X' && s[j] != '/') {
                ++j;
            }
            score += 10 - s[i - 1] - s[i];
        } else { // normal roll
            int a = s[i] - '0';
            int b = (i < 8) ? s[i + 1] - '0' : 0;
            if (a + b > 10) { // strike in next frame
                score += a + b + (i < 9 ? 10 : 0);
                lastFrameStrike = true;
            } else { // normal roll or spare
                score += a + b;
            }
        }
    }
    if (!lastFrameStrike) {
        for (int i = 0; i < 3; ++i) {
            if (s[10 - i] == 'X') { // bonus strike
                score += 10;
                break;
            } else if (s[10 - i] == '/') { // bonus spare
                int j = 10 - i - 1;
                while (j >= 0 && s[j] != 'X' && s[j] != '/') {
                    --j;
                }
                score += 10 - s[10 - i - 1] - s[10 - i];
                break;
            } else { // no bonus
                int a = s[10 - i] - '0';
                int b = (i == 2) ? 0 : s[9 - i] - '0';
                if (a + b > 10) { // strike in next frame
                    score += a + b + (i < 2 ? 10 : 0);
                    break;
                } else { // normal roll or spare
                    score += a + b;
                    break;
                }
            }
        }
    }
    return score;
}