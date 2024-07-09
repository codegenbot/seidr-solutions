#include <iostream>
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    int roll1, roll2, roll3;
    bool spare = false;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'X') { 
            score += 10;
            if(i < input.length() - 1) {
                if(input[i+1] == '/') { 
                    score += 10;
                    i++; 
                } else {
                    score += input[i+1] - '0';
                    i++; 
                }
            }
        } else if(input[i] == '/') { 
            score += 10 - (input[i+1] - '0' + input[i+2] - '0');
            i+=2; 
        } else {
            roll1 = input[i] - '0';
            if(i < input.length() - 1) {
                if(input[i+1] == '/') { 
                    score += roll1 + 10 - (input[i+2] - '0' + input[i+3] - '0');
                    i+=3; 
                    spare = true;
                } else {
                    score += roll1;
                    if(i < input.length() - 1) {
                        if(input[i+1] == 'X') { 
                            score += 10 + 10 + (input[i+2] - '0' + input[i+3] - '0');
                            i+=3; 
                        } else {
                            roll2 = input[i+1] - '0';
                            if(i < input.length() - 1) {
                                if(input[i+2] == '/') { 
                                    score += roll1 + roll2 + 10 - (input[i+3] - '0' + input[i+4] - '0');
                                    i+=4; 
                                } else {
                                    score += roll1 + roll2;
                                    i++; 
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if(spare) {
        score += 10;
    }

    return score;
}

int main() {
    std::string input;
    std::cout << "Enter the bowling score string: ";
    std::cin >> input;
    int score = bowlingScore(input);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}