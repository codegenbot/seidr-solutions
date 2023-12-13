#include <iostream>
#include <string>

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
            }
            bowlIndex++;
        } else if (bowl == '/') {
            score += 10 - (input[i - 1] - '0');
            score += (input[i + 1] == 'X') ? 10 : std::isdigit(input[i + 1]) ? input[i + 1] - '0' : 0;
            bowlIndex += 2;
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

    if (input.back() == 'X' || input.back() == '/') {
        char lastBowl = input[input.size() - 1];
        score += (lastBowl == 'X') ? 10 : 10 - (input[input.size() - 2] - '0');
        score += (lastBowl == 'X') ? ((input[input.size() - 3] == 'X') ? 10 : (input[input.size() - 3] - '0'))
                                    : (input[input.size() - 1] == 'X') ? 10 : (input[input.size() - 1] - '0');
    }

    return score;
}

int main() {
    std::string input;
    getline(std::cin, input);

    int score = calculateScore(input);
    std::cout << score << std::endl;

    return 0;
}