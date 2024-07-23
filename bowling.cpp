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
                if (currentRoll1 + currentRoll2 < 10) {
                    score += 10 - (currentRoll1 + currentRoll2);
                } else if (currentRoll1 > 0 && currentRoll2 > 0) {
                    score += currentRoll1 + currentRoll2;
                } else if (currentRoll1 > 0) {
                    score += currentRoll1;
                }
            } else {
                strike = false;
                score += 10;
                if (s.size() - s.find('/') > 3) {
                    score += stoi(string(1, c) + string(1, s[s.find('/') + 1]));
                }
            }
            currentRoll1 = 0;
            currentRoll2 = 0;
        } else if (c == 'X') {
            score += 10;
            strike = true;
            if (s.size() - s.find('X') > 2) {
                score += stoi(string(1, s[s.find('X') + 1]) + string(1, s[s.find('X') + 2]));
            }
        } else {
            if (!strike) {
                currentRoll1++;
                if (currentRoll1 + currentRoll2 > 10) {
                    score += 10;
                    currentRoll1 = 0;
                    currentRoll2 = 0;
                } else if (currentRoll1 == 10) {
                    score += 10;
                    strike = true;
                }
            } else {
                currentRoll2++;
            }
        }
    }
    
    return score;
}

int main() {
    cout << bowlingScore("XXX/") << endl;
}