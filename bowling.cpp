#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    int bowlCount = 0;
    
    while (frame <= 10) {
        char bowl = bowls[bowlIndex];
        
        if (bowl == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] == '/' ? (10 - '0') : (bowls[bowlIndex + 1] - '0'));
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] == '/' ? (10 - '0') : (bowls[bowlIndex + 2] - '0'));
            bowlIndex++;
        } else if (bowl == '/') {
            score += (10 - (bowls[bowlIndex - 1] - '0'));
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
            bowlIndex += 2;
        } else {
            score += (bowl - '0');
            if (bowlIndex > 0 && bowls[bowlIndex - 1] == '/') {
                score += (bowl - '0');
            }
            bowlIndex++;
        }
        
        bowlCount++;
        if (bowlCount % 2 == 0) {
            frame++;
        }
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