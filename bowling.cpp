int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentFrame <= 9 && s[i+1] != 'X') {
                score += 10 - (s[i-1] - '0');
            }
            currentFrame++;
        } else if (isdigit(s[i])) {
            int strike = s[i] - '0';
            if (strike == 10) {
                score += strike;
                for (int j = i+1; j < s.length(); j++) {
                    if (s[j] == '/') break;
                    if (s[j] == 'X') {
                        score += 10;
                        i = j;
                        break;
                    }
                }
            } else {
                score += strike;
            }
        } else if (s[i] == 'X') {
            score += 10;
            for (int j = i+1; j < s.length(); j++) {
                if (s[j] == '/') break;
                if (s[j] == 'X') {
                    score += 10;
                    i = j;
                    break;
                }
            }
        }
    }
    return score;
}