```cpp
#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    bool strike = false;
    
    for (char c : s + "/") { 
        if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
        } else if (c == 'X') {
            score += 10;
            currentRoll = 0;
        } else {
            if (!strike) {
                currentRoll++;
            } else {
                if (currentRoll < 10) {
                    score += 10 - currentRoll;
                    currentRoll = 0;
                }
                strike = false;
            }
        }
    }

    return score;
}

int main() { return bowlingScore("XXX/"); }