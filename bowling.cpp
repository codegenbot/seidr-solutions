```cpp
#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            string firstRollStr = s.substr(0, i);
            string secondRollStr = s.substr(i + 1);
            int firstRoll = stoi(firstRollStr);
            int secondRoll = stoi(secondRollStr);
            if (firstRoll + secondRoll >= 10) {
                score += 10;
            } else {
                score += firstRoll + secondRoll;
            }
        } else {
            string rollStr = s.substr(i, 1);
            int roll = stoi(rollStr);
            if (roll == 10) {
                score += 10;
            } else {
                score += roll;
            }
        }
    }
    return score;
}