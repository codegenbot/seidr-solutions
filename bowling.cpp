#include <iostream>
#include <string>

int scoreBowlingRound(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (frame == 10) break;
        if (bowls[i] == 'X') {
            score += 10;
            if (bowls[i + 1] == 'X' && bowls[i + 2] == 'X') score += 10 + 10 + 10;
            else if (bowls[i + 1] != 'X' && bowls[i + 2] == '/') score += 10 + 10;
            else score += 10 + (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0') + (bowls[i + 2] == 'X' ? 10 : bowls[i + 2] - '0');
            ++frame;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            score += (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0');
            ++frame;
        } else if (bowls[i] == '-') {
            continue;
        } else {
            score += bowls[i] - '0';
            if (bowls[i + 1] == '/') {
                score += 10 - (bowls[i] - '0');
                ++frame;
            }
        }
    }
    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;
    std::cout << scoreBowlingRound(bowls) << std::endl;
    return 0;
}