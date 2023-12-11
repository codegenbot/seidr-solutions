#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    for (char bowl : input) {
        if (frame > 10) {
            break;
        }
        
        if (bowl == 'X') {
            score += 10;
            if (frame < 10) {
                score += (input[bowlIndex + 1] == 'X') ? 10 : std::isdigit(input[bowlIndex + 1]) ? input[bowlIndex + 1] - '0' : 0;
                score += (input[bowlIndex + 2] == 'X') ? 10 : std::isdigit(input[bowlIndex + 2]) ? input[bowlIndex + 2] - '0' : 0;
            }
            frame++;
        }
        else if (bowl == '/') {
            score += 10 - (input[bowlIndex - 1] - '0');
            score += (input[bowlIndex + 1] == 'X') ? 10 : std::isdigit(input[bowlIndex + 1]) ? input[bowlIndex + 1] - '0' : 0;
            frame++;
        }
        else if (std::isdigit(bowl)) {
            score += bowl - '0';
            frame++;
        }
        
        bowlIndex++;
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