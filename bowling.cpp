#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    int bonus = 0;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                bonus += 2;
            }
            bowl = 0;
            frame++;
        } else if (c == '/') {
            score += (10 - bowl);
            if (frame < 10) {
                bonus += 1;
            }
            bowl = 0;
            frame++;
        } else if (c == '-') {
            bowl = 0;
            frame++;
        } else {
            score += (c - '0');
            bowl++;
            if (bowl == 2 || c == '9') {
                bowl = 0;
                frame++;
            }
        }

        if (bonus > 0) {
            score += (c - '0');
            bonus--;
        }

        if (bonus > 0 && c == '/') {
            score += (c - '0');
            bonus--;
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = getScore(input);
    std::cout << score << std::endl;

    return 0;
}