```cpp
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'X') { 
            score += 10;
            if(i + 1 < input.length()) {
                if(input[i+1] == 'X') { 
                    score += 10;
                    i++; 
                } else {
                    score += input[i+1] - '0' + input[i+2] - '0';
                    i+=2; 
                }
            } else {
                score += 10;
            }
        } else if(input[i] == '/') { 
            score += 10 - (input[i+1] - '0' + input[i+2] - '0');
            i+=2; 
        } else {
            int roll1 = input[i] - '0';
            if(i + 1 < input.length()) {
                if(input[i+1] == '/') { 
                    score += roll1 + 10 - (input[i+2] - '0' + input[i+3] - '0');
                    i+=3; 
                } else {
                    int roll2 = input[i+1] - '0';
                    score += roll1 + roll2;
                    i++; 
                }
            } else {
                score += roll1;
            }
        }
    }
    return score;
}