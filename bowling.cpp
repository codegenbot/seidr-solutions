```cpp
#include <iostream>
#include <string>
#include <stdexcept>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < input.size(); i++) {
        char bowl = input[i];

        if (bowl == 'X') {
            score += 10;
            if (frame < 10) {
                score += (input[i + 1] == 'X') ? 10 : std::isdigit(input[i + 1]) ? input[i + 1] - '0' : 0;
                score += (input[i + 2] == 'X') ? 10 : std::isdigit(input[i + 2]) ? input[i + 2] - '0' : 0;
            } else if (frame == 10) {
                score += (input[i + 1] == 'X') ? 10 : std::isdigit(input[i + 1]) ? input[i + 1] - '0' : 0;
                score += (input[i + 2] == 'X') ? 10 : std::isdigit(input[i + 2]) ? input[i + 2] - '0' : 0;
                break;
            }
            bowlIndex++;
        } else if (bowl == '/') {
            score += 10 - (input[i - 1] - '0');
            score += (input[i + 1] == 'X') ? 10 : std::isdigit(input[i + 1]) ? input[i + 1] - '0' : 0;
            bowlIndex++;
        } else if (std::isdigit(bowl)) {
            score += bowl - '0';
            if (frame < 10 && bowlIndex % 2 == 0 && bowl != '0') {
                if (input[i + 1] == '/') {
                    score += 10 - (bowl - '0');
                }
            }
            bowlIndex++;
        }

        if (bowlIndex % 2 == 0) {
            frame++;
        }
    }

    return score;
}

bool validateInput(const std::string& input) {
    if (input.size() != 10) {
        return false;
    }

    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < input.size(); i++) {
        char bowl = input[i];
        if (frame < 10) {
            if (bowlIndex % 2 == 0 && !std::isdigit(bowl)) {
                return false;
            }

            if (bowlIndex % 2 == 1 && !(bowl == '/' || bowl == 'X')) {
                return false;
            }
        } else if (frame == 10) {
            if (bowlIndex == 0 && !std::isdigit(bowl)) {
                return false;
            }

            if (bowlIndex == 1 && !(bowl == '/' || bowl == 'X')) {
                return false;
            }

            if (bowlIndex == 2) {
                if ((input[i - 1] == '/') && !(bowl == '/' || bowl == 'X')) {
                    return false;
                }

                if ((input[i - 1] == 'X') && !(std::isdigit(bowl) || bowl == 'X')) {
                    return false;
                }
            }
        }

        if (bowlIndex % 2 == 1) {
            frame++;
        }
        bowlIndex++;
    }

    return true;
}

int main() {
    std::string input;
    std::cin >> input;

    if (!validateInput(input)) {
        throw std::invalid_argument("Invalid input");
    }

    int score = calculateScore(input);
    std::cout << score << std::endl;

    return 0;
}
```