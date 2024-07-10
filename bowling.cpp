#include <vector>
#include <string>
#include <iostream>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    bool previousStrike = false;

    for (char c : s) {
        if (c == 'X') {
            if (previousStrike || frameTotal >= 10) {
                score += 10;
            } else {
                score += 10 + nextTwoRolls();
            }
            previousStrike = true;
            roll++;
        } else if (c == '/') {
            int thisRoll = 10 - roll;
            score += thisRoll;
            previousStrike = false;
            roll++;
        } else {
            int pins = c - '0';
            frameTotal += pins;
            if (!previousStrike && frameTotal >= 10) {
                score += 10;
            }
            previousStrike = false;
            roll++;
        }
    }

    return score;
}

int nextTwoRolls() {
    int total = 0;
    for (char c : s.substr(roll, 2)) {
        if (c == 'X') {
            total += 10 + nextTwoRolls();
        } else if (c == '/') {
            total += 10 - roll;
        } else {
            total += c - '0' + (nextRoll() ? c - '0' : 0);
        }
    }
    return total;
}

int main() {
    std::cout << bowlingScore("X|---5-8-|X||25--|-1-3-4-6-8-9-7"); 
    return 0;
}