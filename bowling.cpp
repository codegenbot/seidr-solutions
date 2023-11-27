#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 0;
    int bowlIndex = 0;
    
    while (frame < 10) {
        char bowl = input[bowlIndex];
        
        if (bowl == 'X') {
            score += 10;
            score += (input[bowlIndex + 1] == 'X') ? 10 : (input[bowlIndex + 1] - '0');
            score += (input[bowlIndex + 2] == 'X') ? 10 : (input[bowlIndex + 2] - '0');
            bowlIndex += 1;
        } else if (bowl == '/') {
            score += (10 - (input[bowlIndex - 1] - '0'));
            score += (input[bowlIndex + 1] == 'X') ? 10 : (input[bowlIndex + 1] - '0');
            bowlIndex += 1;
        } else {
            score += (bowl - '0');
        }
        
        bowlIndex += 1;
        frame += 1;
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