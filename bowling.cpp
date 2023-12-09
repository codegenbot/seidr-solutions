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
                    score += std::stoi(std::string(1, round[i + 1])) + std::stoi(std::string(1, round[i + 2]));
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
    std::string round;
    std::getline(std::cin, round);

    int score = scoreOfRound(round);
    std::cout << score << std::endl;

    return 0;
}