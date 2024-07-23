```cpp
#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            string firstRoll = s.substr(i - 1, 1);
            string secondRoll = s.substr(i + 1, 1);
            if (currentFrame == 10) {
                score += 10 + (firstRoll[0] - '0');
            } else if ((firstRoll[0] - '0') + (secondRoll[0] - '0') >= 10) {
                score += 10 + ((firstRoll[0] - '0') + (secondRoll[0] - '0') - 10);
            } else {
                score += (firstRoll[0] - '0') + (secondRoll[0] - '0');
            }
            currentFrame++;
        }
    }
    return score;
}