int bowlingScore(const string& str) {
    int score = 0;
    int roll1, roll2;
    bool inFrame = false;

    for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i])) {
            inFrame = true;
            if (i + 2 <= str.size()) {
                roll1 = str[i] - '0';
                if (str[i + 1] == '/') {
                    score += (roll1 * 10) + 10;
                    break;
                } else {
                    roll2 = str[i + 1] - '0';
                    if (i + 3 <= str.size()) {
                        if (isdigit(str[i + 2])) {
                            if (str[i + 2] != '/') {
                                score += (roll1 * 10) + roll2;
                            } else {
                                score += (roll1 * 10);
                            }
                            break;
                        } else {
                            score += (roll1 * 10) + roll2;
                            break;
                        }
                    } else if (inFrame) {
                        score += (roll1 * 10) + roll2;
                        inFrame = false;
                        break;
                    }
                }
            } else if (isdigit(str[i])) {
                int roll = str[i] - '0';
                if (!inFrame) {
                    score += (roll * 10);
                } else if (str[i + 1] == '/') {
                    score += (roll * 10) + 10;
                } else {
                    score += (roll * 10);
                }
            }
        }
    }
    return score;
}