#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll1 = 0;
    int currentRoll2 = 0;
    bool strike = false;
    int frameScore = 0;
    
    for (char c : s) {
        if (c == '/') {
            if (!strike) {
                if (currentRoll1 + currentRoll2 < 10) {
                    score += 10 - (currentRoll1 + currentRoll2);
                } else {
                    score += 10;
                }
            } else {
                frameScore = 10;
                score += frameScore;
            }
            currentRoll1 = 0;
            currentRoll2 = 0;
            strike = false;
        } else if (c == 'X') {
            score += 10;
            frameScore = 10;
            strike = true;
        } else {
            if (!strike) {
                if (currentRoll1 + 1 >= 10) {
                    score += 10 - currentRoll1;
                    currentRoll2++;
                    if (currentRoll1 + currentRoll2 == 10) {
                        frameScore = 10;
                    } else {
                        frameScore = currentRoll1 + currentRoll2;
                    }
                } else {
                    currentRoll1++;
                }
            } else {
                currentRoll2++;
            }
        }
    }
    
    if (!strike) {
        if (currentRoll1 > 0 && currentRoll2 > 0) {
            score += currentRoll1 + currentRoll2;
        } else if (currentRoll1 > 0) {
            score += currentRoll1 + currentRoll2;
        }
    }
    
    return score;
}

int main() {
    cout << bowlingScore("XXX/") << endl;
}