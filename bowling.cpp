```cpp
int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            if (i + 2 < s.length()) {
                if (s[i+1] - '0' + s[i+2] - '0' >= 10) {
                    score += 10 + (s[i-1] - '0') * 2;
                } else {
                    score += 10 + (s[i-1] - '0') + (s[i+1] - '0');
                }
            } else if (i == s.length() - 1) {
                score += 10 + roll1 * 2;
            } else {
                // handle this case
            }
        } else {
            int val = s[i] - '0';
            if (roll1 == 0) {
                roll1 = val;
            } else {
                if (roll1 + val >= 10) {
                    score += 10;
                } else {
                    score += roll1 + val;
                }
                roll1 = 0; 
            }
        }
    }

    // add the last frame
    if (roll1 > 0) {
        score += roll1 * 2;
    }

    return score;

}