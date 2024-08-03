int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 + (currentFrame - 1);
            currentFrame++;
        } else {
            int strike = false;
            int spare = false;
            for (int i = 0; i < 3 && c != '/' && c != 'X'; i++) {
                if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9') {
                    int val = c - '0';
                    if (i == 0) {
                        score += val;
                    } else {
                        score += val + currentFrame * 10;
                    }
                }
                if (c == 'X') strike = true;
                if (c == '/') spare = true;
                c++;
            }
            if (strike) {
                score += 30;
            } else if (spare) {
                score += 10 + currentFrame * 10;
            }
            currentFrame++;
        }
    }
    return score;
}