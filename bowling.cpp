```cpp
int bowlingScore(std::string input) {
    int score = 0;
    int currentRoll1 = 0, currentRoll2 = 0;

    for (int i = 0; i < input.length(); i++) { 
        if (input[i] == 'X') {
            score += 30;
            currentRoll1 = 0; currentRoll2 = 0;
        } else if (input[i] == '/') {
            score += currentRoll1 + 10;
            currentRoll1 = 0; currentRoll2 = 0;
        } else if (input[i] >= '0' && input[i] <= '9') {
            if (currentRoll1 == 0) {
                currentRoll1 = input[i] - '0';
            } else {
                currentRoll2 += input[i] - '0';
            }
        } else if (input[i] == '-') {
            score += currentRoll1 + currentRoll2;
            currentRoll1 = 0; currentRoll2 = 0;
        }
    }

    if (currentRoll1 > 0 || currentRoll2 > 0) {
        if (currentRoll1 + currentRoll2 >= 10) {
            score += currentRoll1 + 10;
        } else {
            score += currentRoll1 + currentRoll2;
        }
    }

    return score;
}