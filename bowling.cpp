int calculateScore(string s) {
    int score = 0;
    int rollCount = 1;

    for (char c : s) {
        if (c == '/') {
            score += min(10, rollCount * 10);
            rollCount = 0;
        } else if (c == 'X') {
            score += 30;
            rollCount = 0;
        } else {
            int value = c - '0';
            if (rollCount == 1) {
                if (value + 1 >= 10) {
                    score += (10 - value);
                    break;
                }
                score += value * 2;
            } else if (rollCount == 2) {
                score += value;
            }
            rollCount++;
        }
    }

    // Handle any remaining rolls
    while (rollCount < 10) {
        if (s[s.size() - rollCount - 1] == 'X') {
            score += 30;
            break;
        } else {
            int value = s[s.size() - rollCount - 1] - '0';
            if (value + 1 >= 10) {
                score += (10 - value);
                break;
            }
            score += value * 2;
        }
    }

    return score;
}