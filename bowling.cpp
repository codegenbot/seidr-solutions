#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll1 = 0;
    int roll2 = 0;
    int currentFrame = 1;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame > 1 ? 10 : 0);
            currentFrame++;
        } else if (s[i] == '/') {
            if (i + 2 >= s.length()) {
                roll1 = 10;
            } else if (isdigit(s[i+1]) && isdigit(s[i+2])) {
                roll1 = 10 - (s[i+1] - '0' + s[i+2] - '0');
            } else {
                roll1 = 10 - (s[i+1] - '0');
            }
            score += roll1;
            currentFrame++;
        } else {
            if (isdigit(s[i])) {
                int num = s[i] - '0';
                roll1 = num;
                i++;
                if (i < s.length() && isdigit(s[i])) {
                    roll2 = s[i] - '0';
                }
                score += roll1 + roll2;
                currentFrame++;
            } else {
                if (roll1 == 10) {
                    score += 10;
                } else {
                    score += roll1;
                }
                currentFrame++;
            }
        }
    }
    return score;
}