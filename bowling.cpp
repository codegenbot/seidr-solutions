#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            string firstRoll = s.substr(i-1, 1);
            string secondRoll = s.substr(i+1, 1);
            int first = stoi(firstRoll);
            int second = stoi(secondRoll);
            if (currentFrame == 10) {
                score += 10 + first;
            } else if (first + second >= 10) {
                score += 10 + (first + second - 10);
            } else {
                score += first + second;
            }
            currentFrame++;
        }
    }
    return score;
}