#include <iostream>

int main() {
    std::string bowling_round;
    std::cin >> bowling_round;

    int score = 0;
    int frame = 1;
    for (int i = 0; i < bowling_round.size() && frame <= 10; ++i) {
        if (bowling_round[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowling_round[i+1] == 'X') ? 10 + ((bowling_round[i+2] == 'X') ? 10 : (bowling_round[i+2] - '0')) :
                                                         ((bowling_round[i+2] == '/') ? 10 : (bowling_round[i+1] - '0' + bowling_round[i+2] - '0'));
                ++frame;
            } else if (frame == 10) {
                score += (bowling_round[i+1] == 'X' || bowling_round[i+2] == 'X') ? 10 : (bowling_round[i+1] - '0' + ((bowling_round[i+2] == '/') ? 10 : (bowling_round[i+2] - '0')));
                ++frame;
            }
            ++i;
        } else if (bowling_round[i] == '/') {
            score += 10 - (bowling_round[i-1] - '0');
            score += (frame == 10 && bowling_round[i+1] == 'X') ? 10 : (bowling_round[i+1] - '0');
            ++frame;
        } else {
            score += (bowling_round[i] - '0');
            if (frame == 10 && i+1 < bowling_round.size())
                score += ((bowling_round[i+1] == '/') ? 10 : (bowling_round[i+1] - '0'));
            if ((i+1 < bowling_round.size() && bowling_round[i+1] != '/')) {
                if (frame < 10 && i+2 < bowling_round.size())
                    ++frame;
                ++i;
            }
        }
    }

    std::cout << score << std::endl;
    return 0;
}