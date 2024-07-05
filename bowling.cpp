```
#include <string>
#include <iostream>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRoll = 0;
    bool strike = false;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll++;
            strike = true;
        } else if (c == '/') {
            if(strike){
                score += 20 + currentRoll * 10;
                strike = false;
            } else {
                score += 10 + currentRoll;
                currentRoll = 0;
            }
        } else {
            int roll = c - '0';
            score += roll;
            currentRoll++;
            if (currentRoll == 2) {
                score += roll * 2;
                currentRoll = 0;
            }
        }
    }
    return score;
}

int main() { 
    std::cout << bowlingScore("XXXX/") << std::endl; 
    return 0; 
}