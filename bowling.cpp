#include <vector>
#include <iostream>
#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '/') {
            if (firstRollInFrame) {
                if (s[i-1] != 'X') {
                    int roll = (s[i-1] - '0');
                    score += roll;
                } else {
                    score += 10;
                }
                firstRollInFrame = false;
            } else {
                int roll = 0;
                for (; i < s.length() && (s[i] != '/' || s[i-1] == 'X'); i++) {
                    if (s[i] - '0' > 9) {
                        roll += 10;
                        break;
                    }
                    roll += s[i] - '0';
                }
                score += roll;
            }
        }
    }

    return score;
}