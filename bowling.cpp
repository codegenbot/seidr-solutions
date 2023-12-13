#include <iostream>
#include <string>

int getScore(const std::string& bowlingRound) {
    int score = 0;
    int frame = 1;
    int i = 0;

    while (frame <= 10 && i < bowlingRound.length()) {
        if (bowlingRound[i] == 'X') {
            score += 10;
            score += (bowlingRound[i + 1] == 'X') ? 10 : (isdigit(bowlingRound[i + 1]) ? bowlingRound[i + 1] - '0' : 0);
            score += (bowlingRound[i + 2] == 'X') ? 10 : (isdigit(bowlingRound[i + 2]) ? bowlingRound[i + 2] - '0' : 0);
            i++;
        } else if (isdigit(bowlingRound[i])) {
            score += bowlingRound[i] - '0';
            score += (bowlingRound[i + 1] == '/') ? (10 - (bowlingRound[i] - '0')) : (isdigit(bowlingRound[i + 1]) ? bowlingRound[i + 1] - '0' : 0);
            i += (bowlingRound[i + 1] == '/') ? 2 : 1;
        } else if (bowlingRound[i] == '/') {
            score += 10 - (bowlingRound[i - 1] - '0');
            score += (bowlingRound[i + 1] == 'X') ? 10 : (isdigit(bowlingRound[i + 1]) ? bowlingRound[i + 1] - '0' : 0);
            i += 2;
        } else if (bowlingRound[i] == '-') {
            i++;
        }

        frame++;
    }

    return score;
}

int main() {
    std::string bowlingRound;
    std::cout << "Enter the bowling round: ";
    std::cin >> bowlingRound;

    int score = getScore(bowlingRound);
    std::cout << "Score: " << score << std::endl;

    return 0;
}