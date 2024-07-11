#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int spare = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == 'X'){
            score += 10 + currentFrame;
            currentFrame++;
            spare = 0;
        } else if(s[i] == '/'){
            if(spare > 0) {
                score += 10;
                score += (10 - currentFrame);
                currentFrame = 1;
                spare = 0;
            } else {
                score += 5 + (s[i+1]-'0');
                i++;
                spare = 1;
            }
        } else {
            if(spare > 0) {
                score += s[i] - '0';
                currentFrame++;
            } else {
                int ball = s[i] - '0';
                score += ball;
                if(currentFrame == 2) {
                    if(ball == 1 || (ball + s[i+1] - '0' <= 10)) {
                        score += ball + s[i+1] - '0';
                        i++;
                        currentFrame = 1;
                    } else {
                        score += 10;
                        currentFrame = 1;
                    }
                } else {
                    currentFrame++;
                }
            }
        }
    }
    
    return score;
}