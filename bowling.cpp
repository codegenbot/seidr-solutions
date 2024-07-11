#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + (i > 0 ?stoi(string(1, s[i-1])) : 0);
        } else {
            int currentFrame = stoi(string(1, s[i]) + string(1, s[i+1]));
            if (currentFrame < 10) {
                score += currentFrame;
            } else {
                score += 10;
            }
        }
    }
    return score;
}