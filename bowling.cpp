```cpp
int bowlingScore(const char* s) {
    int score = 0;
    std::string str(s);
    int roll = 0;
    bool lastFrame = false;
    for (char c : str) {
        if (c == '/') {
            if (!lastFrame && roll < 2) {
                score += 10 - (10 - roll);
            }
            roll = 0;
        } else if (c >= '1' && c <= '9') {
            roll++;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
            lastFrame = true;
        }
    }
    if (!lastFrame) {
        if (roll < 2)
            score += roll * 10;
        else
            score += 10 + (roll - 2) * 10 / 3;
    }
    return score;
}