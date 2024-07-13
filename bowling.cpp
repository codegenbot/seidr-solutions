```cpp
#include <vector>
#include <future>

int bowlingScore(const std::string& input) {
    if (input.empty()) {
        throw std::invalid_argument("No input provided");
    }
    int score = 0;
    int prevRoll1 = 0;
    int prevRoll2 = 0;

    std::vector<int> rolls = parseInput(input);

    for (int i = 0; i < 10; i++) {
        if (rolls[i] == 10) {
            score += 30;
        } else if (rolls[i] + rolls[i+1] >= 10) {
            score += 10 + (i < 8 ? rolls[i+2] : prevRoll1 + prevRoll2);
            i++;
        } else {
            score += rolls[i] + rolls[i+1];
        }
    }

    return score;
}

std::vector<int> parseInput(const std::string& input) {
    std::vector<int> rolls;
    for (int i = 0; i < input.length(); i++) {
        if (input.substr(i, 1) == "X") {
            rolls.push_back(10);
        } else if (input[i] != ' ') {
            int roll = input[i] - '0';
            rolls.push_back(roll);
        }
    }
    return rolls;
}