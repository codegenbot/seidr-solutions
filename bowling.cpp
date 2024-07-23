#include <iostream>
#include <string>
using namespace std;

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
            bonusRoll++;
        } else {
            if (!strike) {
                currentRoll1++;
                if (currentRoll1 + 1 >= 10) {
                    if (currentRoll1 < 10) {
                        score += 10 - currentRoll1;
                        currentRoll2++;
                    } else {
                        score += currentRoll1;
                    }
                } else {
                    if (currentRoll1 == 10) {
                        score += 10;
                    }
                }
            } else {
                currentRoll2++;
                if (currentRoll2 >= 2) {
                    strike = false;
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
    cout << bowlingScore("XXX/") << endl;
}