int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            frame++;
            if (frame > 9) return -1;
            if (i + 2 <= s.size()) {
                if (s[i+1] == 'X') {
                    score += 30;
                    i++; // skip the '/' and the next character
                } else {
                    int rolls = 0;
                    for (; rolls < 3; rolls++) {
                        if (i + rolls >= s.size() || s[i+rolls] != '-') {
                            break;
                        }
                    }
                    score += (10 - frame) * 10;
                    i++; // skip the '/' and the next character
                }
            } else {
                int firstRoll = s[i-1] - '0';
                int secondRoll = s[i] - '0';
                if (firstRoll + secondRoll == 10) {
                    score += 10 + 10;
                } else {
                    score += firstRoll * 10 + secondRoll;
                }
            }
        } else if (s[i] == 'X') {
            score += 30;
            i++; // skip the '/'
        } else {
            int roll = s[i] - '0';
            if (i+1 < s.size() && s[i+1] != '/') {
                int nextRoll = s[i+1] - '0';
                if (roll + nextRoll == 10) {
                    score += 10 + 10;
                    i++; // skip the '/'
                } else {
                    score += roll * 10 + nextRoll;
                }
            } else {
                score += roll * 10;
            }
        }
    }
    return score;
}