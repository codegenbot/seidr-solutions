#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < round.size(); i++) {
        char currentBowl = round[i];

        if (currentBowl == 'X') {
            score += 10;
            if (frame < 10) {
                score += (round[i + 1] == 'X') ? 10 : (round[i + 1] == '/' ? (10 - (round[i + 2] - '0')) : (round[i + 1] - '0'));
                score += (round[i + 2] == 'X') ? 10 : (round[i + 2] - '0');
            }
            frame++;
        } else if (currentBowl == '/') {
            score += (10 - (round[i - 1] - '0'));
            score += (round[i + 1] == 'X') ? 10 : (round[i + 1] - '0');
            frame++;
        } else if (currentBowl == '-') {
            continue;
        } else {
            score += (currentBowl - '0');
            if (bowlIndex % 2 == 1) {
                frame++;
            }
        }

        bowlIndex++;
    }

    return score;
}

int main() {
    std::string round;
    std::cin >> round;
    std::cout << scoreOfRound(round) << std::endl;

    return 0;
}