```c++
#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll1 = 0; 
    int roll2 = 0; 
    bool isStrike = false;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 'X') {
            score += 30;
            isStrike = true;
        } else if (c == '/') {
            if (isStrike) {
                score += 10 + roll1 * 2 + roll2;
                isStrike = false;
            } else {
                score += 10 + roll1 + roll2;
                roll1 = 0; 
                roll2 = 0;
            }
        } else {
            int temp = c - '0';
            if (!isStrike) {
                roll1 += temp;
                if (roll1 < 2) {
                    roll2 = 0; 
                }
            } else { 
                score += 30;
                roll2 = 0; 
            }
        }
    }

    return score;
}