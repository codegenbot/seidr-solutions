```c++
#include <vector>
#include <string>

int bowlingScore(const std::string& input) {
    if (input.empty()) {
        throw std::runtime_error("No input provided");
    }
    int score = 0;
    int prevRoll1 = 0;
    int prevRoll2 = 0;

    std::vector<int> rolls = {0};
    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') {
            rolls.push_back(10);
        } else if (input[i+1] != ' ') {
            int roll = input[i] - '0' + (input[i+1] - '0');
            rolls.push_back(roll);
            i++;
        } else {
            rolls.push_back(input[i] - '0');
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i] == 10) {
            score += 30;
        } else if (rolls[i] + rolls[(i+1)%10] >= 10) {
            score += 10 + (i < 8 ? rolls[(i+2)%10] : prevRoll1 + prevRoll2);
        } else {
            score += rolls[i] + rolls[(i+1)%10];
        }
    }

    return score;
}