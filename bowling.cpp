#include <iostream>
#include <string>

int getScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int roll = 0;

    for (char c : bowls) {
        if (frame > 10) break;

        if (c == 'X') {
            score += 10;
            if (frame <= 9) {
                score += (bowls[roll + 1] == 'X') ? 10 + ((bowls[roll + 2] == 'X') ? 10 : (bowls[roll + 2] - '0')) : (bowls[roll + 1] == '/') ? 10 : (bowls[roll + 1] - '0');
                roll++;
            }
            roll++;
            frame++;
        } else if (c == '/') {
            score += (10 - (bowls[roll - 1] - '0')) + ((bowls[roll + 1] == 'X') ? 10 : (bowls[roll + 1] - '0'));
            roll++;
            frame++;
        } else {
            score += c - '0';
            roll++;
            if (frame <= 9 && roll % 2 == 0) {
                if (bowls[roll - 1] == '/') {
                    score += (10 - (bowls[roll - 2] - '0'));
                }
                frame++;
            }
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::getline(std::cin, bowls);

    int score = getScore(bowls);
    std::cout << score << std::endl;

    return 0;
}