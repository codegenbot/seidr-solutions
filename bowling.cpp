#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'X') { 
            score += 10;
            i++; 
        } else if(input[i] == '/') { 
            score += 10 - (input[i+1] - '0' + input[i+2] - '0');
            i+=2; 
        } else {
            int roll = input[i] - '0';
            if(input[i+1] == '/') { 
                score += roll + 10 - (input[i+2] - '0' + input[i+3] - '0');
                i+=3; 
            } else {
                score += roll;
                if(input[i+1] == 'X') { 
                    score += 10 + 10 + (input[i+2] - '0' + input[i+3] - '0');
                    i+=3; 
                } else {
                    score += roll + input[i+1] - '0';
                    i++; 
                }
            }
        }
    }
    return score;
}