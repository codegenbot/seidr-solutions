#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 0;
    int bowl = 0;
    
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += 10;
                if (bowl == 0) {
                    score += 10;
                }
            }
            bowl++;
        } else if (c == '/') {
            score += 10 - (input[bowl-1] - '0');
            if (frame < 9) {
                score += 10 - (input[bowl-1] - '0');
            }
            bowl++;
        } else if (c >= '0' && c <= '9') {
            score += c - '0';
            if (frame < 9 && bowl % 2 == 0) {
                if (input[bowl-1] != '/') {
                    score += c - '0';
                }
            }
            bowl++;
        }
        
        if (bowl == 2 || c == 'X' || c == '/') {
            bowl = 0;
            frame++;
        }
        
        if (frame == 10) {
            break;
        }
    }
    
    return score;
}

int main() {
    std::string input;
    std::cout << "Enter the individual bowls in a 10-frame round: ";
    std::cin >> input;
    
    int score = calculateScore(input);
    std::cout << "Score: " << score << std::endl;
    
    return 0;
}