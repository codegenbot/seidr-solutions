int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            continue;
        }
        if (isdigit(s[i])) {
            if (s[i + 1] == '/') {
                break;
            }
            roll1 = s[i] - '0';
            if (i < 8) {
                for (int j = i + 2; j <= i + 3 && j < s.size(); j++) {
                    if (!isdigit(s[j])) {
                        break;
                    }
                    roll2 = roll2 * 10 + s[j] - '0';
                }
            }
        } else {
            roll1 = 10;
            roll2 = 10;
        }

        if (roll1 == 10) {
            score += roll1 + roll2;
        } else if (roll1 + roll2 >= 10) {
            score += 10 + s[i + 3] - '0' + s[i + 4] - '0';
        } else {
            score += roll1 + roll2;
        }
    }

    return score;
}