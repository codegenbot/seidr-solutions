```
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    int roll1 = 0, roll2 = 0;

    for (int i = 0; i < 10; ++i) {
        if (input[i] == 'X') { 
            score += 10;
            if(i < 9) {
                if(input[i+1] == 'X' || input[i+1] == '/') 
                    score += 10;
                else
                    score += roll1 + roll2;
            }
        } 
        else if (input[i] == '/') { 
            roll1 = input[i+1] - '0';
            score += 10;
            i++; 
        } 
        else {
            roll1 = input[i] - '0';
            roll2 = input[i+1] - '0';
            if (i < 8 && input[i+2] == '/') { 
                score += roll1 + 10;
                i++; // move to the next frame
            } 
            else {
                score += roll1 + roll2;
            }
        }
    }

    return score;
}