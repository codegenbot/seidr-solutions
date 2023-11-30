#include <iostream>
#include <string>

int main() {
    std::string bowls;
    std::cin >> bowls;

    int score = 0;
    int frame = 1;
    int roll = 1;

    for (char bowl : bowls) {
        if (frame == 10 && roll == 4) { // check if it's the last frame and a third roll
            break;
        }

        if (bowl == 'X' || bowl == 'x') { // strike
            score += 10;
            if (frame < 10) { // update score based on next two rolls
                score += 10;

                if (roll == 1) {
                    frame++;
                    roll = 1;
                } else {
                    roll = 1;
                }
            } else { // update score based on next two bowls (or one bowl if last frame)
                roll++;
                if (roll == 4) {
                    frame++;
                    roll = 1;
                }
            }
        } else if (bowl == '/') { // spare
            score += (10 - score % 10);
            if (frame < 10) { // update score based on next roll
                score += 10;
                roll = 1;
                frame++;
            } else { // update score based on next bowl
                roll++;
            }
        } else if (bowl == '-') { // miss
            // do nothing
            if (frame < 10 && roll == 2) {
                frame++;
            }
            roll = roll % 2 + 1;
        } else { // numeric value (0-9)
            score += (int)(bowl - '0');
            if (frame < 10) { // update score based on next roll
                roll++;
                if (roll == 2) {
                    frame++;
                } else if (roll == 3) {
                    frame++;
                    roll = 1;
                }
            } else { // update score based on next bowl
                roll++;
            }
        }
    }

    std::cout << score << std::endl;

    return 0;
}