```cpp
int bowlingScore(const std::string& input) {
    if (input.empty()) {
        throw std::invalid_argument("No input provided");
    }
    int score = 0;
    int prevRoll = 0;
    bool isStrike = false;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'X') {
            score += 30;
            isStrike = true;
        } else if (input[i] == '/') {
            int roll1, roll2;
            char nextChar = input[i + 1];
            if (!std::isdigit(nextChar)) {
                i++; // Move to the next character
            } else {
                roll1 = nextChar - '0';
                score += roll1;
                i++; // Move to the next character
        } else if (input[i] == ' ') {
            int roll1, roll2;
            char prevChar = input[i - 1];
            if(i > 0) {
                if (!std::isdigit(prevChar)) {
                    throw std::invalid_argument("Invalid input");
                }
                roll1 = prevChar - '0';
                if(isStrike) {
                    score += roll1 + prevRoll * 2;
                    isStrike = false;
                } else {
                    score += roll1;
                }
                prevRoll = roll1;
            }
        } else {
            int roll = input[i] - '0';
            if (isStrike) {
                score += roll + prevRoll * 2;
                isStrike = false;
            } else {
                score += roll;
            }
            prevRoll = roll;
        }
    }

    // Check for spare at the end of each frame
    if(input[input.length() - 1] == '/') {
        int roll1, roll2;
        char nextChar = input[input.length() - 2];
        if (!std::isdigit(nextChar)) {
            throw std::invalid_argument("Invalid input");
        }
        int roll1 = nextChar - '0';
        score += roll1 + prevRoll;
    }

    return score;
}