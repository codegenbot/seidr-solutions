#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int prevFrame = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            if(i+1<s.length() && s[i+1] != '/') {
                if(s[i+1] - '0' + prevFrame + 10 > 10) {
                    score += 10 + prevFrame;
                    i++;
                } else {
                    score += s[i+1] - '0' + prevFrame + 10;
                }
            }
        } else if (s[i] == '/') {
            score += 10 + prevFrame;
        } else {
            int currentFrame = s[i] - '0';
            if(i+1<s.length() && s[i+1] != '/') {
                currentFrame += s[i+1] - '0';
                if(currentFrame > 10) {
                    score += 10 + prevFrame;
                    i++;
                } else {
                    score += currentFrame + prevFrame;
                }
            } else {
                score += currentFrame + prevFrame;
            }
        }
        prevFrame = currentFrame;
    }
    return score;
}