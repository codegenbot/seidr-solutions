#include <string>
#include <iostream>

int calculateFrameScore(int roll) {
    if (roll == 10) // strike
        return 10;
    else if (roll < 10) { // spare
        return 10 - roll;
    } 
    return roll;
}

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    int previousRoll = 0;

    for (char c : s) {
        if (c == '/') {
            if (roll > 9)
                score += calculateFrameScore(10);
            else
                score += calculateFrameScore(roll);
            roll = 0;
        } else if (isdigit(c)) {
            roll *= 10;
            roll += c - '0';
        } else if (c == '+') {
            // add to previous frame's score
            if (previousRoll > 9)
                score += calculateFrameScore(10);
            else
                score += calculateFrameScore(previousRoll);
            previousRoll = 0;
        } else if (c == '-') {
            roll -= c - '0';
        }
    }

    return score;
}

int main() {
    std::string s = "1/81/2/34//5+64/7-3+/--8-9";
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}