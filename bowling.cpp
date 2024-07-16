#include <iostream>
#include <string>

int calculateBowlingScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[ball + 1] == 'X') ? 10 : (std::isdigit(bowls[ball + 1]) ? bowls[ball + 1] - '0' : 10);
                score += (bowls[ball + 2] == 'X') ? 10 : (std::isdigit(bowls[ball + 2]) ? bowls[ball + 2] - '0' : 10);
            }
            ball++;
            frame++;
        } else if (c == '/') {
            score += 10 - (std::isdigit(bowls[ball - 1]) ? bowls[ball - 1] - '0' : 0);
            score += (bowls[ball + 1] == 'X') ? 10 : (std::isdigit(bowls[ball + 1]) ? bowls[ball + 1] - '0' : 10);
            ball += 2;
            frame++;
        } else if (std::isdigit(c)) {
            score += c - '0';
            if (std::isdigit(bowls[ball + 1])) {
                score += bowls[ball + 1] - '0';
            }
            ball++;
            frame++;
        }
    }
    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;
    std::cout << calculateBowlingScore(bowls) << std::endl;
    return 0;
}