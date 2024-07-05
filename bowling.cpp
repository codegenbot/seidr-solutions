```cpp
int bowlingScore() {
    int score = 0;
    int currentRoll = 0;
    char c;
    std::cin >> c;
    for (; c != ' '; ) {
        if (c == 'X') {
            score += 30;
            currentRoll++;
        } else if (c == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
        } else {
            int roll = c - '0';
            score += roll;
            currentRoll++;
            if (currentRoll == 2) {
                score += roll * 2;
                currentRoll = 0;
            }
        }
        std::cin >> c;
    }
    return score;
}