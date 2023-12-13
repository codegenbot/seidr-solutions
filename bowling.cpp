```cpp
#include <iostream>
#include <string>

int scoreOfRound(const std::string& roundInput) {
    int score = 0;
    int frame = 0;
    int bowl = 0;
    int rolls = roundInput.size();

    for (int i = 0; i < rolls; i++) {
        if (frame == 10) {
            break;
        }

        char current = roundInput[i];

        if (current == 'X') {
            score += 10;

            if (frame < 9) {
                score += (roundInput[i + 1] == 'X' || roundInput[i + 2] == '/') ? 10 : (roundInput[i + 1] - '0');
            }

            frame++;
            bowl = 0;
        } else if (current == '/') {
            score += 10;

            if (frame < 9) {
                score += (roundInput[i + 2] == 'X') ? 10 : (roundInput[i + 2] - '0');
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
    std::string roundInput;
    std::getline(std::cin, roundInput, '\n');

    int score = scoreOfRound(roundInput);
    std::cout << score << std::endl;

    return 0;
}
```