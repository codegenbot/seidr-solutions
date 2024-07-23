#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll1 = 0;
    int currentRoll2 = 0;
    bool strike = false;
    
    for (char c : s) {
        if (c == '/') {
            if (!strike) {
                score += 10 - currentRoll1;
                if (currentRoll1 > 0) {
                    score += currentRoll1 + currentRoll2;
                }
            } else {
                score += 20;
            }
            currentRoll1 = 0;
            currentRoll2 = 0;
            strike = false;
        } else if (c == 'X') {
            score += 10;
            currentRoll1 = 0;
            currentRoll2 = 0;
            strike = true;
        } else {
            if (!strike) {
                currentRoll1++;
                if (currentRoll1 >= 10) {
                    if (currentRoll1 + currentRoll2 < 10) {
                        score += 10 - currentRoll1;
                        score += 10 - (currentRoll1 + currentRoll2);
                    } else {
                        score += 10;
                        score += 10;
                    }
                    break;
                } else if (currentRoll1 > 0 && currentRoll1 + currentRoll2 >= 10) {
                    if (currentRoll1 + currentRoll2 < 10) {
                        score += 10 - currentRoll1;
                        score += 10 - (currentRoll1 + currentRoll2);
                    } else {
                        score += 10;
                        score += 10;
                    }
                    break;
                } 
            } else {
                currentRoll2++;
                if (currentRoll2 >= 10) {
                    score += 10;
                    score += 10;
                    break;
                } else {
                    score += 10 + currentRoll2;
                    strike = false;
                }
            }
        }
    }
    
    return score;
}

int main() {
    cout << bowlingScore("XXX/") << endl;
}