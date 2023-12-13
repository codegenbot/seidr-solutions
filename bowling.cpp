#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 1;
    int rolls = 0;
    int prevScore = 0;
    bool spare = false;
    bool strike = false;

    for (char c : round) {
        if (frame > 10) {
            break;
        }

        if (c == 'X') {
            score += 10;
            rolls++;

            if (rolls == 1 && frame < 10) {
                strike = true;
            } else {
                strike = false;
                frame++;
                rolls = 0;
            }
        } else if (c == '/') {
            score += (10 - prevScore);
            rolls++;

            if (frame < 10) {
                spare = true;
            } else {
                spare = false;
            }

            frame++;
            rolls = 0;
        } else if (c == '-') {
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        } else {
            int pin = c - '0';
            score += pin;
            rolls++;

            if (spare) {
                score += pin;
                spare = false;
                frame++;
                rolls = 0;
            } else if (strike) {
                score += pin;
                rolls = 0;
                frame++;
            }

            prevScore = pin;
        }
    }

    return score;
}

int main() {
    std::string round;
    std::cout << "Enter the round: ";
    std::cin >> round;
    std::cout << "Score: " << scoreOfRound(round) << std::endl;

    return 0;
}