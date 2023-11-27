#include <iostream>
#include <string>

int getScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    while (frame <= 10 && bowlIndex < bowls.length()) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
                score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
                bowlIndex += 1;
            }
            frame++;
        } else if (bowls[bowlIndex] == '/') {
            score += 10 - (bowls[bowlIndex - 1] - '0');
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
            bowlIndex += 1;
            frame++;
        } else {
            score += (bowls[bowlIndex] - '0');
            if (frame < 10 && bowls[bowlIndex + 1] == '/') {
                score += 10 - (bowls[bowlIndex] - '0');
                bowlIndex += 1;
            }
            bowlIndex += 1;
            
            if (frame < 10 && bowls[bowlIndex] == '-') {
                bowlIndex += 1;
            }
            
            frame++;
        }
    }
    
    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;
    
    int score = getScore(bowls);
    std::cout << score << std::endl;
    
    return 0;
}