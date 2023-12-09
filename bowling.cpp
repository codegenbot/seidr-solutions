```cpp
#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    for (int i = 0; i < round.size(); i++) {
        if (round[i] == 'X') {
            score += 10;
            if (i < round.size() - 2) {
                if (round[i + 2] == '/') {
                    score += 10;
                } else {
                    score += round[i + 1] - '0' + round[i + 2] - '0';
                }
            }
        } else if (round[i] == '/') {
            score += 10 - (round[i - 1] - '0');
            if (i < round.size() - 1) {
                score += round[i + 1] - '0';
            }
        } else {
            score += round[i] - '0';
        }
    }
    return score;
}

int main() {
    std::string game;
    std::getline(std::cin, game);

    int score = scoreOfRound(game);
    std::cout << score << std::endl;

    return 0;
}
```