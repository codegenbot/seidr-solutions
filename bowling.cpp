#include <string>
#include <iostream>

using namespace std;

int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') {
            score += 30;
        } else if (input[i] == '/') {
            string nextTwoStr = input.substr(i + 1, 2);
            int nextTwo = stoi(nextTwoStr);
            if (nextTwo == 10) {
                score += 20;
            } else {
                score += 10 + nextTwo;
            }
        } else {
            string currentRollStr = input.substr(i, 2);
            int currentRoll = stoi(currentRollStr);
            if (currentRoll < 10) {
                score += currentRoll;
            } else {
                int first = stoi(currentRollStr.substr(0,1));
                int second = stoi(currentRollStr.substr(1,1));
                if (first == 10) {
                    score += 10 + second;
                } else if (second == 10) {
                    score += first + 10;
                } else {
                    score += first + second;
                }
            }
        }
    }
    return score;
}