```cpp
int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRolls = 0;
    for (int i = 0; i < 20; ++i) {
        if (s[i] == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (s[i] == '/') {
            score += 10 - s[i+1] + (currentRolls > 0 ? 15 : 10);
            currentRolls = 0;
            i++;
        } else if (isdigit(s[i])) {
            int roll = s[i] - '0';
            if (currentRolls == 2) {
                // Ignore extra rolls
                continue;
            }
            score += roll;
            currentRolls++;
            if (i < 18 && s[i+1] != '/') i++;
        }
    }
    return score;
}