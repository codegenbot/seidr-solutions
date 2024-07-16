```cpp
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    int bonus = 0;

    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 10;
            bonus = 10;
        } else if (s[i] == '/') {
            roll = s[i-1] - '0';
            int nextRoll = s[i+1] - '0';
            if (nextRoll == 'X' || (nextRoll >= '1' && nextRoll <= '9')) {
                score += 10;
            } else {
                score += roll + nextRoll;
            }
        } else {
            roll = s[i] - '0';
            score += roll;
        }
    }

    if (bonus == 10) {
        for (int i = 11; i < s.length(); ++i) {
            if (s[i] == 'X') {
                bonus -= 10;
                break;
            } else if (s[i] == '/') {
                int firstRoll = s[i-1] - '0';
                int secondRoll = s[i+1] - '0';
                if (firstRoll + secondRoll == 10) {
                    bonus -= 10;
                    break;
                }
            }
        }
    }

    return score + bonus;
}