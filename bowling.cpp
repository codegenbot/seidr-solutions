#include <iostream>
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    int roll1 = 0, roll2 = 0;

    for (int i = 0; i < 10; ++i) {
        if (input[i] == 'X') { // strike
            score += 10 + bowlingScore(input.substr(i+1));
        } else if (input[i] == '/') { // spare
            roll1 = input[i+2] - '0';
            score += 10;
            i++; // move to the next frame
        } else {
            roll1 = input[i] - '0';
            roll2 = input[i+1] - '0';
            if (i < 8 && input[i+2] == '/') { // spare in next frame, add it now
                score += roll1 + roll2;
            } else {
                score += roll1 + roll2;
            }
        }
    }

    return score;
}