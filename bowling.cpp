#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    std::vector<int> rolls(10);
    
    for (char c : s) {
        if (c == '/') {
            roll = 0;
        } else if (isdigit(c)) {
            roll = roll * 10 + (c - '0');
        } else if (c == 'X') {
            score += 10 + rolls[0];
            rolls[0] = 10;
            roll = 0;
        }
        rolls[9-roll] = std::max(roll, 1);
    }
    
    for (int i = 0; i < 10; i++) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i+1];
        } else {
            score += rolls[i] + (i >= 1 ? rolls[i-1] : 0);
        }
    }
    
    return score;
}