#include <iostream>
#include <string>

int calculateBowlingScore(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (frame == 10) break;
        if (bowls[i] == 'X' || bowls[i] == '/') {
            ++frame;
        }
        
        if (bowls[i] == 'X') {
            score += 10;
            if (i + 2 < bowls.size()) {
                if (bowls[i + 2] == 'X') score += 10;
                else if (bowls[i + 2] == '/') score += 10;
                else score += bowls[i + 1] - '0' + bowls[i + 2] - '0';
            }
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            if (i + 1 < bowls.size()) {
                if (bowls[i + 1] == 'X') score += 10;
                else score += bowls[i + 1] - '0';
            }
        } else {
            score += bowls[i] - '0';
            if (bowls[i] == '-') score = std::max(score, 0);
            if (bowls[i] == '9' && i + 1 < bowls.size() && bowls[i + 1] == '-') score = std::max(score, 9);
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