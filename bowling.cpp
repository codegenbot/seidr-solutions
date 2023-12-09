#include <iostream>
#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int frame = 0;
    int frameIndex = 0;
    
    for (int i = 0; i < input.length(); i++) {
        if (frame == 10) {
            break;
        }
        
        if (input[i] == 'X') {
            score += 10;
            
            if (input[i + 2] == 'X') {
                score += 10;
                
                if (input[i + 4] == 'X') {
                    score += 10;
                } else {
                    score += input[i + 4] - '0';
                }
            } else if (input[i + 4] == '/') {
                score += 10;
            } else {
                score += input[i + 2] - '0';
                score += input[i + 4] - '0';
            }
            
            frame++;
            frameIndex = 0;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
            
            if (input[i + 2] == 'X') {
                score += 10;
            } else {
                score += input[i + 2] - '0';
            }
            
            frame++;
            frameIndex = 0;
        } else if (input[i] == '-') {
            frameIndex++;
            
            if (frameIndex == 2) {
                frame++;
                frameIndex = 0;
            }
        } else {
            score += input[i] - '0';
            frameIndex++;
            
            if (frameIndex == 2) {
                frame++;
                frameIndex = 0;
            }
        }
    }
    
    return score;
}

int main() {
    std::string input;
    std::cin >> input;
    
    int score = calculateScore(input);
    std::cout << score << std::endl;
    
    return 0;
}