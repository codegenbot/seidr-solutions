```cpp
#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 0;
    int bowl = 0;
    int rolls = round.size();

    for (int i = 0; i < rolls; i++) {
        if (frame == 10) {
            break;
        }

        char current = round[i];

        if (current == 'X') {
            score += 10;

            if (frame < 9) {
                score += (round[i + 1] == 'X' || round[i + 2] == '/') ? 10 + (round[i + 1] - '0') : (round[i + 1] - '0') + (round[i + 2] - '0');
            }

            frame++;
            bowl = 0;
        } else if (current == '/') {
            score += 10;

            if (frame < 9) {
                score += (round[i + 2] == 'X') ? 10 : (10 - (current - '0'));
            }

            frame++;
            bowl = 0;
        } else {
            score += current - '0';
            bowl++;

            if (current != 'X' && bowl == 1) {
                frame++;
                bowl = 0;
            }
        }
    }

    return score;
}

int main() {
    std::string round;
    std::getline(std::cin, round, '\n');

    int score = scoreOfRound(round);
    std::cout << score << std::endl;

    return 0;
}
```