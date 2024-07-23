```cpp
int bowlingScore(string s) {
    int score = 0;
    int currentRoll1 = 0;
    int currentRoll2 = 0;
    bool strike = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentRoll1 + currentRoll2 < 10) {
                score += 10 - (currentRoll1 + currentRoll2);
            }
            currentRoll1 = 0;
            currentRoll2 = 0;
            strike = false;
        } else if (s[i] == 'X') {
            score += 10;
            currentRoll1 = 0;
            currentRoll2 = 0;
            strike = true;
        } else {
            if (!strike) {
                currentRoll1++;
                if (i < s.length() - 1 && s[i + 1] == '/') {
                    score += currentRoll1;
                    break;
                }
                if (s[i + 1] == 'X') {
                    score += currentRoll1 + 10;
                    i++;
                } else {
                    currentRoll2 = s[i + 1] - '0';
                    i++;
                }
            } else {
                currentRoll2 = s[i + 1] - '0';
                i++;
                if (i < s.length() && s[i] == '/') {
                    score += 10;
                    break;
                }
            }
        }
    }

    return score;
}