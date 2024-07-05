```cpp
#include <string>
#include <iostream>

int main() {
    std::string s = "XXXX/8-5/7-3/X/2+6/9-X/4+5/";
    int score = bowlingScore(s);
    std::cout << score << std::endl;
    return 0;
}

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
        } else if(c == '+') {
            int roll = c + 1 - ' ';
            score += roll;
            currentRoll++;
        } else if (c >= '0' && c <= '9') {
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