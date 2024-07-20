#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i + 2 <= s.length()) {
            if (s.substr(i, 2) == "X ") {
                score += 30;
                i++;
            } else if (s[i] == 'X' || s[i] == '/') {
                int currentRoll = (s[i] == 'X') ? 10 : 10 - (s[i + 1] - '0');
                if (i < s.length() - 1) {
                    score += currentRoll;
                    i++;
                    if (i < s.length()) {
                        if (s.substr(i, 2) != "X ") {
                            score += (10 - (s[i] - '0')) + (10 - (s[i + 1] - '0'));
                            i++;
                        } else {
                            score += currentRoll;
                            i++;
                        }
                    }
                } else if (i == s.length() - 1) {
                    score += currentRoll;
                }
            } else {
                int currentRoll = 10 - (s[i] - '0');
                if (i < s.length() - 1 && s[i + 1] != 'X' && s[i + 1] != '/') {
                    score += currentRoll;
                    i++;
                    if (i < s.length()) {
                        if (s[i] == '0') {
                            score += 10 + (10 - (s[i + 1] - '0'));
                            i++;
                        } else {
                            score += currentRoll;
                        }
                    }
                } else {
                    score += currentRoll;
                }
            }
        } else {
            if (s[i] == 'X') {
                score += 30;
            } else if (s[i] == '/') {
                score += 10 + (10 - (s[i + 1] - '0'));
            } else {
                int currentRoll = 10 - (s[i] - '0');
                score += currentRoll;
            }
        }
    }
    return score;
}