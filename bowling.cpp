#include <iostream>
#include <string>

int scoreRound(const std::string& round) {
    int score = 0;
    int frame = 0;
    int bowl = 0;
    int rolls = round.size();

    for (int i = 0; i < rolls; i++) {
        if (frame == 10) {
            break;
        }

        if (round[i] == 'X') {
            score += 10;
            score += (round[i + 1] == 'X') ? 10 : (isdigit(round[i + 1]) ? round[i + 1] - '0' : 0);
            score += (round[i + 2] == 'X') ? 10 : (isdigit(round[i + 2]) ? round[i + 2] - '0' : 0);
            frame++;
        } else if (round[i] == '/') {
            score += (10 - (round[i - 1] - '0'));
            score += (isdigit(round[i + 1]) ? round[i + 1] - '0' : 0);
            frame++;
        } else if (isdigit(round[i])) {
            score += (round[i] - '0');
            bowl++;
            if (bowl == 2) {
                frame++;
                bowl = 0;
            }
        }
    }

    return score;
}

int main() {
    std::string round;
    std::cin >> round;
    std::cout << scoreRound(round) << std::endl;
    return 0;
}