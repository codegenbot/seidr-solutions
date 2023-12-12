#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    while (frame <= 10 && bowlIndex < bowls.size()) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 1]) ? (bowls[bowlIndex + 1] - '0') : 0);
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 2]) ? (bowls[bowlIndex + 2] - '0') : 0);
            bowlIndex += 1;
        } else if (isdigit(bowls[bowlIndex])) {
            score += (bowls[bowlIndex] - '0');
            score += (isdigit(bowls[bowlIndex + 1]) ? (bowls[bowlIndex + 1] - '0') : 0);
            bowlIndex += 2;
        } else if (bowls[bowlIndex] == '/') {
            score += (10 - (bowls[bowlIndex - 1] - '0'));
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 1]) ? (bowls[bowlIndex + 1] - '0') : 0);
            bowlIndex += 2;
        } else if (bowls[bowlIndex] == '-') {
            bowlIndex += 1;
        }
        
        frame++;
    }
    
    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;
    
    int score = calculateScore(bowls);
    std::cout << score << std::endl;
    
    return 0;
}