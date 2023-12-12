```c++
#include <iostream>
#include <string>

int getScore(const std::string& bowlingString) {
    int score = 0;
    int frame = 0;
    int roll = 0;
    int framesPlayed = 0;
    int rollsPlayed = 0;
    bool spare = false;
    bool strike = false;

    for (char c : bowlingString) {
        if (framesPlayed >= 10) {
            break;
        }

        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                if (strike) {
                    score += 10;
                }
                if (spare) {
                    score += 10;
                }
                strike = true;
                spare = false;
                frame++;
                rollsPlayed = 0;
            } else if (frame == 9 && rollsPlayed == 0) {
                strike = true;
                spare = false;
            }
        } else if (c == '/') {
            score += 10 - roll;
            if (frame < 9) {
                if (spare) {
                    score += 10;
                }
                spare = true;
                strike = false;
                frame++;
                rollsPlayed = 0;
            } else if (frame == 9 && rollsPlayed == 0) {
                spare = true;
                strike = false;
            }
        } else if (c == '-') {
            if (frame < 9) {
                roll = 0;
                frame++;
                rollsPlayed = 0;
            }
        } else {
            score += c - '0';
            roll = c - '0';
            if (frame < 9) {
                if (spare) {
                    score += roll;
                }
                spare = false;
                strike = false;
                if (roll != 0) {
                    roll = 0;
                }
                else {
                    roll++;
                }
                rollsPlayed++;
            }
        }

        framesPlayed++;
    }

    score += roll;

    return score;
}

int main() {
    std::string bowlingString;
    std::cin >> bowlingString;

    int score = getScore(bowlingString);
    std::cout << score << std::endl;

    return 0;
}
```