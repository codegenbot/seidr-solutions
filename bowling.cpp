#include <iostream>

int main() {
    std::string bowling_round;
    std::cin >> bowling_round;

    int score = 0;
    int frame = 1;
    int rolls = 0;

    for (char ch : bowling_round) {
        if (ch == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowling_round[rolls + 1] == 'X') ? 10 : (bowling_round[rolls + 1] - '0');
                score += (bowling_round[rolls + 2] == 'X') ? 10 : (bowling_round[rolls + 2] - '0');
                rolls++;
            }
            frame++;
        } else if (ch == '/') {
            score += 10 - (bowling_round[rolls - 1] - '0');
            score += (bowling_round[rolls + 1] == 'X') ? 10 : (bowling_round[rolls + 1] - '0');
            frame++;
            rolls++;
        } else {
            score += (ch == '-') ? 0 : (ch - '0');
            if (frame < 10 && rolls % 2 == 0) {
                if (ch != '0' && bowling_round[rolls + 1] == '/') {
                    score += 10 - (ch - '0');
                }
            }
            rolls++;
        }
    }

    std::cout << score << std::endl;
    return 0;
}