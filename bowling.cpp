#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int nextTwo = stoi(s.substr(i + 1, 2));
            score += 10 + nextTwo;
            i++;
        } else {
            int thisFrame = 0;
            for (int j = i; j < s.length(); j++) {
                if (s[j] == 'X' || j == s.length() - 1) {
                    if (j == s.length() - 1) {
                        thisFrame += s[j] - '0';
                    } else {
                        thisFrame += 10;
                    }
                    break;
                } else if (s[j] == '/') {
                    int nextTwo = stoi(s.substr(j + 1, 2));
                    thisFrame += 10 - (10 - nextTwo);
                    break;
                } else {
                    thisFrame += s[j] - '0';
                }
            }
            score += thisFrame;
        }
    }
    return score;