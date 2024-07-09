#include <iostream>
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
            int roll = input[i] - '0';
            if(i + 1 < input.length() && input[i+1] == '/') { 
                score += roll;
                i++; 
            } else if (i + 1 < input.length()) {
                if(input[i+1] == 'X') {
                    score += roll + 10;
                    i+=2; 
                } else {
                    score += roll + input[i+1] - '0';
                    i+=2; 
                }
            } else {
                score += roll;
                i++;
            }
        }
    }
    return score;
}

int main() {
    std::string input;  
    std::cin >> input;  
    int score = bowlingScore(input);  
    std::cout << "The score is: " << score << std::endl;  
    return 0;
}