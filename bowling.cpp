```cpp
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i <= s.length(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += bowlingRoll(s, i + 1);
            }
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += max(firstRoll, secondRoll);
            ++frame;
        } else {
            int roll = s[i] - '0';
            score += roll;
            if (i < s.length() - 1 && s[i + 1] >= 'X') {
                continue;
            }
            if (i < s.length() - 1) {
                score += bowlingRoll(s, i + 1);
            }
        }
    }
    return score;
}

int bowlingRoll(string s, int start) {
    int roll = 0;
    for (int i = start; i < s.length(); ++i) {
        if (s[i] == 'X') {
            roll += 10;
            return roll;
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            roll += max(firstRoll, secondRoll);
            return roll;
        }
        roll += s[i] - '0';
    }
    return roll;
}