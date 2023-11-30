#include <iostream>
#include <string>

int getScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowl = 0;

    for (int i = 0; i < bowls.size(); i++) {
        if (frame > 10) {
            break;
        }

        if (bowls[i] == 'X') {
            score += 10;
            if (frame <= 10) {
                score += (bowls[i + 1] == 'X' || bowls[i + 1] == '/') ? 10 : (bowls[i + 1] - '0');
                score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] - '0');
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            score += (bowls[i + 1] == 'X' || bowls[i + 1] == '/') ? 10 : (bowls[i + 1] - '0');
            frame++;
        } else if (bowls[i] == '-') {
            // do nothing
        } else {
            score += (bowls[i] - '0');
            bowl++;
            if (bowl == 2) {
                bowl = 0;
                frame++;
            }
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the string representing the individual bowls: ";
    std::getline(std::cin, bowls);

    int score = getScore(bowls);
    std::cout << "Score: " << score << std::endl;

    return 0;
}