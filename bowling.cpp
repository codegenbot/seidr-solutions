```cpp
int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    bool strike = false;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - roll);
            }
            roll = 0;
        } else if (c >= '1' && c <= '9') {
            int pin = c - '0';
            roll++;
            if (roll > pin) {
                score -= 2 + pin;
                strike = true;
            }
        } else if (c == 'X') {
            score += 10;
            strike = true;
        }
    }
    if (strike) {
        score += 10 * 3;
    } else {
        if (roll < 2) {
            if (roll == 1)
                score += roll * 10;
            else
                score += 10 + (roll - 2) * 10 / 3;
        }
    }
    return score;
}