#include <iostream>
#include <string>

int scoreOfRound(std::string round) {
    int score = 0;
    int frame = 1;
    int ball = 0;

    for (char c : round) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (round[ball + 1] == 'X') ? 10 : (round[ball + 1] - '0');
                score += (round[ball + 2] == 'X') ? 10 : (round[ball + 2] == '/' ? (10 - (round[ball + 1] - '0')) : (round[ball + 2] - '0'));
            }
            ball += 1;
        } else if (c == '/') {
            score += (10 - (round[ball - 1] - '0'));
            if (frame < 10) {
                score += (round[ball + 1] == 'X') ? 10 : (round[ball + 1] - '0');
            }
            ball += 1;
        } else if (c == '-') {
            // do nothing
        } else {
            score += (c - '0');
            if (frame < 10 && ball % 2 == 0 && (round[ball - 1] - '0') + (c - '0') == 10) {
                score += (round[ball + 1] == 'X') ? 10 : (round[ball + 1] == '/' ? (10 - (c - '0')) : (round[ball + 1] - '0'));
            }
            ball += 1;
        }

        if (ball % 2 == 0) {
            frame += 1;
        }

        if (frame > 10 && !(round[round.size() - 3] == 'X' || round[round.size() - 2] == '/')) {
            break;
        }
    }

    return score;
}

int main() {
    std::string round;
    std::cout << "Enter the round: ";
    std::getline(std::cin, round);
    int score = scoreOfRound(round);
    std::cout << "Score of the round: " << score << std::endl;

    return 0;
}