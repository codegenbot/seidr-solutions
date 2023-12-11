#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    int bowlsRemaining = 10;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (input[bowlIndex + 1] == 'X') ? 10 : std::isdigit(input[bowlIndex + 1]) ? input[bowlIndex + 1] - '0' : 0;
                score += (input[bowlIndex + 2] == 'X') ? 10 : std::isdigit(input[bowlIndex + 2]) ? input[bowlIndex + 2] - '0' : 0;
            }
            bowlIndex++;
            bowlsRemaining--;
        } else if (std::isdigit(c)) {
            score += c - '0';
            if (frame < 10 && bowlsRemaining % 2 == 0) {
                if (c == '9' && input[bowlIndex + 1] == '/') {
                    score += 10;
                }
            }
            bowlIndex++;
            bowlsRemaining--;
        } else if (c == '/') {
            score += 10 - (input[bowlIndex - 1] - '0');
            if (frame < 10) {
                score += (input[bowlIndex + 1] == 'X') ? 10 : std::isdigit(input[bowlIndex + 1]) ? input[bowlIndex + 1] - '0' : 0;
            }
            bowlIndex++;
            bowlsRemaining--;
        } else if (c == '-') {
            bowlIndex++;
            bowlsRemaining--;
        }

        if (bowlsRemaining == 0) {
            frame++;
            bowlsRemaining = 10;
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = calculateScore(input);
    std::cout << score << std::endl;

    return 0;
}