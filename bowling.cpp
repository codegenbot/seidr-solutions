```cpp
int bowlingScore(std::string input) {
    int score = 0;
    bool firstInFrame = true;
    bool strikeOrSpare = false;
    for (char c : input) {
        if (c == '|') {
            if (!firstInFrame && !strikeOrSpare) {
                if (score < 10) {
                    score += 10 - score;
                } else {
                    score += 10;
                }
            }
            firstInFrame = true;
            strikeOrSpare = false;
        } else if (c == 'X') {
            score += 10;
            int extraPins = 0;
            if (!firstInFrame && !strikeOrSpare) {
                for (int i = 2; i < input.size(); ++i) {
                    if (input[i] != '|') {
                        extraPins = input[i] - '0';
                        break;
                    }
                }
            }
            firstInFrame = true;
            strikeOrSpare = false;
        } else if (c == '-') {
            firstInFrame = true;
        } else {
            int pins = c - '0';
            score += pins;
            if (!firstInFrame) {
                if (score + pins >= 10) {
                    score += 10 - score;
                } else {
                    score += pins;
                }
                strikeOrSpare = true;
            }
            firstInFrame = false;
        }
    }
    return score;
}