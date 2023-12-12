#include <iostream>
#include <string>

int getScore(const std::string& bowlingString) {
    int score = 0;
    int frame = 0;
    int roll = 0;
    int framesPlayed = 0;
    bool spare = false;
    bool strike = false;

    for (char c : bowlingString) {
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
                roll = 0;
                frame++;
                framesPlayed++;
            }
        } else if (c == '/') {
            score += 10 - roll;
            if (frame < 9) {
                if (spare) {
                    score += 10;
                }
                spare = true;
                strike = false;
                roll = 0;
                frame++;
                framesPlayed++;
            }
        } else if (c == '-') {
            if (frame < 9) {
                roll = 0;
                frame++;
                framesPlayed++;
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
            }
        }

        if (framesPlayed == 10) {
            break;
        }
    }

    return score;
}

int main() {
    std::string bowlingString;
    std::cin >> bowlingString;

    int score = getScore(bowlingString);
    std::cout << score << std::endl;

    return 0;
}