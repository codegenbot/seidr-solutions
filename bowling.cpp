#include <string>
#include <iostream>

int bowlingScore(string s) {
    int score = 0;
    int currentRoll1 = 0;
    int currentRoll2 = 0;
    bool strike = false;
    int bonusRoll = 0;

    for (char c : s) {
        if (c == '/') {
            if (!strike) {
                if (currentRoll1 + currentRoll2 < 10) {
                    score += 10 - (currentRoll1 + currentRoll2);
                } else {
                    score += 10;
                }
            } else {
                score += 10;
                strike = false;
            }
            currentRoll1 = 0;
            currentRoll2 = 0;
        } else if (c == 'X') {
            score += 10;
            strike = true;
            currentRoll1 = 1;
        } else {
            if (!strike) {
                currentRoll1++;
                if (currentRoll1 == 10) {
                    if (currentRoll2 + 1 <= 10) {
                        score += 10 + currentRoll2;
                    } else {
                        score += 10 + (10 - currentRoll2);
                    }
                    strike = true;
                } else if (currentRoll1 + currentRoll2 >= 10) {
                    if (currentRoll1 == 9 && c != '/') {
                        frameScore = 10;
                    } else {
                        frameScore = 10 - currentRoll1;
                    }
                    score += frameScore;
                    strike = true;
                } 
                else {
                    currentRoll2++;
                }
            } else {
                if (currentRoll2 < 9) {
                    currentRoll2++;
                } else {
                    bonusRoll++;
                }
            }
        }
    }

    if (strike) {
        score += 10 + bonusRoll;
    }

    return score;

}

int main() {
    std::cout << bowlingScore("XXX/") << std::endl;
}