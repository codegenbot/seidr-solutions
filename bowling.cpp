```cpp
#include <iostream>
#include <vector>
#include <string>

int bowlingScore(const std::string& input) {
    if (input.empty()) {
        throw std::invalid_argument("No input provided");
    }
    int score = 0;
    int prevRoll1 = 0;
    int prevRoll2 = 0;

    std::vector<int> rolls;

    for (int i = 0; i < 10; i++) {
        if (input.substr(i*2, 1) == "X") {
            score += 30;
        } else if (input.substr((i*2)+1, 1) != ' ') {
            int roll1 = input.substr((i*2)+1, 1) - '0';
            if (input.substr((i*2)+3, 1) == "X" || (input.substr((i*2)+3, 1) - '0' + input.substr((i*2)+4, 1) - '0') >= 10) {
                score += roll1 + 10;
            } else {
                score += roll1 + input.substr((i*2)+3, 1) - '0';
            }
        } else if (input.substr(i*2+1, 2) == "X" || (input.substr(i*2, 1) - '0' + input.substr(i*2+1, 1) - '0') >= 10) {
            score += 10;
            i++;
        } else {
            int roll1 = input.substr(i*2, 1) - '0';
            int roll2 = input.substr((i*2)+1, 1) - '0';
            score += roll1 + roll2;
        }
    }

    return score;
}