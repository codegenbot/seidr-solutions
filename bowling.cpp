#include <string>

int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') {
            score += 30;
        } else if (input[i] == '/') {
            int nextTwo = stoi(input.substr(i + 1, 2));
            score += 10 + nextTwo;
            i++;
        } else {
            int currentRoll = stoi(input.substr(i, 2));
            if (currentRoll < 10) {
                score += currentRoll;
                i++;
            } else {
                int first = stoi(input.substr(i, 1));
                int second = stoi(input.substr(i + 1, 1));
                score += first + second;
            }
        }
    }
    return score;