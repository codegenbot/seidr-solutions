#include <iostream>
#include <string>

int calculateScore(std::string round) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < round.length(); i++) {
        char bowl = round[i];

        if (bowl == 'X') {
            score += 10;

            if (frame < 10) {
                score += (round[i + 1] == 'X') ? 10 : (round[i + 1] - '0');
                score += (round[i + 2] == 'X') ? 10 : (round[i + 2] - '0');
            }

            frame++;
        } else if (bowl == '/') {
            score += (10 - (round[i - 1] - '0'));

            if (frame < 10) {
                score += (round[i + 1] == 'X') ? 10 : (round[i + 1] - '0');
            }

            frame++;
        } else if (bowl == '-') {
            // do nothing
        } else {
            score += (bowl - '0');

            if (frame < 10 && bowlIndex % 2 == 1) {
                if (round[i - 1] == '/') {
                    score += (round[i] - '0');
                }
            }

            if (bowlIndex % 2 == 1) {
                frame++;
            }

            bowlIndex++;
        }
    }

    return score;
}

int main() {
    std::string round;
    std::cin >> round;

    int score = calculateScore(round);
    std::cout << score << std::endl;

    return 0;
}