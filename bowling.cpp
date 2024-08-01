int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, currentFrame = 1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentFrame <= 9) {
                if (i > 0 && s[i - 1] != 'X') {
                    roll1 = stoi(s.substr(i - 2, 1));
                    roll2 = 10 - roll1;
                } else {
                    roll1 = 10;
                    roll2 = 0;
                }
            }
            currentFrame++;
        }
    }

    for (int i = s.length() - 3; i >= 0; i--) {
        if (s[i] == 'X') {
            score += 10 + (i < s.length() - 1 && s[i + 1] != '/') ? 10 : 0;
        } else if (s[i] == '/') {
            int roll = stoi(s.substr(i - 2, 1));
            score += roll + (i < s.length() - 1 && s[i + 1] != '/') ? 10 - roll : 0;
        }
    }

    return score;
}