#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    int i = 0;
    while (i < input.length()) {
        if(input[i] == 'X') { 
            score += 10;
            i++; 
        } else if(input[i] == '/') { 
            score += 10 - (input[i+1] - '0' + input[i+2] - '0');
            i+=3; 
        } else {
            int roll = 0;
            while(i < input.length() && input[i] != '-' && input[i] != '/' ) {
                roll = roll * 10 + (input[i] - '0');  
                i++;  
            }
            if(input[i] == '/') {
                score += roll;
                i++;
            } else if(input[i] == 'X') {
                score += roll + 10;
                i+=2; 
            } else {
                int nextRoll = 0;
                while(i < input.length() && input[i] != '-' && input[i] != '/' ) {
                    nextRoll = nextRoll * 10 + (input[i] - '0');  
                    i++;  
                }
                score += roll + nextRoll;
            }
        }
    }
    return score;
}