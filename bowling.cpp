#include <iostream>
#include <string>

using namespace std;

int sumOfLastTwo(int x) {
    return x + (10 - x);
}

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll < 2) {
                score += min(10, currentRoll);
                currentRoll = 0;
            } else {
                score += sumOfLastTwo(currentRoll);
                currentRoll = 0;
            }
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    if (currentRoll > 0) {
        score += min(10, currentRoll);
    } else if (currentRoll < 2) {
        score += sumOfLastTwo(currentRoll);
    }
    return score;
}