#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int numThrows = 0;
    
    for (char c : bowls) {
        if (c >= '0' && c <= '9') {
            score += c - '0';
            
            if (frame < 10 && numThrows == 0 && c == '10') {
                score += 10;
                ++frame;
            } else if (numThrows == 1) {
                numThrows = 0;
                ++frame;
            } else {
                ++numThrows;
            }
        } else if (c == 'X') {
            score += 10;
            
            if (frame < 10 && numThrows == 0) {
                score += 10;
                ++frame;
            } else if (numThrows == 1) {
                numThrows = 0;
                ++frame;
            } else {
                ++numThrows;
            }
        } else if (c == '/') {
            score += 10 - (bowls[numThrows - 1] - '0');
            
            if (frame < 10 && numThrows == 0) {
                score += 10;
                ++frame;
            } else {
                numThrows = 0;
                ++frame;
            }
        }
    }
    
    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the string representing the individual bowls: ";
    std::getline(std::cin, bowls);
    
    int score = calculateScore(bowls);
    
    std::cout << "Score: " << score << std::endl;
    
    return 0;
}