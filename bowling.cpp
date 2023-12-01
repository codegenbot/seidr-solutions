#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            
            if (frame < 10) {
                if (roll == 0) {
                    score += 10;
                    roll++;
                } else {
                    roll = 0;
                    frame++;
                }
            }
        } else if (c == '/') {
            score += 10 - (input[roll] - '0');
            
            if (frame < 10) {
                roll = 0;
                frame++;
            }
        } else if (c == '-') {
            if (frame < 10) {
                roll++;
            }
        } else {
            score += c - '0';
            
            if (frame < 10) {
                if (roll == 0) {
                    roll++;
                } else {
                    roll = 0;
                    frame++;
                }
            }
        }
        
        if (frame == 10 && roll == 2 && input[roll-1] == '/') {
            score += input[roll] - '0';
        }
    }
    
    return score;
}

int main() {
    std::string input;
    std::cin >> input;
    
    int score = getScore(input);
    std::cout << score << std::endl;
    
    return 0;
}