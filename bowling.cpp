#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    int frameCount = 0;
    int bowlIndex = 0;
    
    while (frame < 10) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            frameCount++;
            bowlIndex++;
        } else if (bowls[bowlIndex + 1] == '/') {
            score += 10;
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            frameCount += 2;
            bowlIndex += 2;
        } else {
            score += (bowls[bowlIndex] - '0') + (bowls[bowlIndex + 1] - '0');
            frameCount += 2;
            bowlIndex += 2;
        }
        
        frame++;
        if (frameCount == 20) {
            break;
        }
    }
    
    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> bowls;
    
    int score = calculateScore(bowls);
    std::cout << "Score: " << score << std::endl;
    
    return 0;
}