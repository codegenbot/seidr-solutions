```cpp
#include <string>

int bowlingScoreHelper(std::string s) {
    int score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10;
        } else {
            score += (c - '0');
        }
    }
    return score;
}

int bowlingScore(std::string s) {
    int score = 0;
    int prevRoll = 0;
    bool isStrike = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            isStrike = true;
        } else if (s[i] == '/') {
            if (isStrike) {
                score += prevRoll * 2;
                isStrike = false;
            } else {
                int roll = bowlingScoreHelper(s.substr(0, i));
                score += roll + 10;
            }
        } else if (s[i] == ' ') {
            int roll = (s[i - 1] - '0') + (s[i + 1] - '0');
            if (isStrike) {
                score += roll + prevRoll * 2;
                isStrike = false;
            } else {
                score += roll;
            }
        } else {
            int roll = s[i] - '0';
            if (isStrike) {
                score += roll + prevRoll * 2;
                isStrike = false;
            } else {
                score += roll;
            }
            prevRoll = roll;
        }
    }
    return score;
}