```cpp
#include <iostream>
#include <string>

int scoreOfRound(std::string round) {
    int score = 0;
    for (int i = 0; i < round.size(); i++) {
        if (round[i] == 'X') {
            score += 10;
            if (i + 2 < round.size()) {
                if (round[i + 2] == '/') {
                    score += 10;
                } else if (round[i + 1] == '/') {
                    score += 10 - (round[i + 2] - '0');
                } else {
                    score += (round[i + 1] - '0') + (round[i + 2] - '0');
                }
            }
        } else if (round[i] == '/') {
            score += 10 - (round[i - 1] - '0');
            if (i + 1 < round.size()) {
                score += round[i + 1] - '0';
            }
        } else {
            score += round[i] - '0';
        }
    }
    return score;
}

int main() {
    std::string round;
    std::getline(std::cin, round);

    int score = scoreOfRound(round);
    std::cout << score << std::endl;

    return 0;
}
```