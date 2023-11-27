#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    int bowl = 0;
    
    for (int i = 0; i < bowls.length(); i++) {
        if (frame == 10) {
            break;
        }
        
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 9) {
                score += (bowls[i+1] == 'X') ? 10 : (isdigit(bowls[i+1]) ? bowls[i+1] - '0' : 10);
                score += (bowls[i+2] == 'X') ? 10 : (isdigit(bowls[i+2]) ? bowls[i+2] - '0' : 10);
            } else if (frame == 9) {
                score += (bowls[i+1] == 'X') ? 10 : (isdigit(bowls[i+1]) ? bowls[i+1] - '0' : 10);
                score += (bowls[i+2] == 'X') ? 10 : (isdigit(bowls[i+2]) ? bowls[i+2] - '0' : 10);
            }
            
            frame++;
        } else if (isdigit(bowls[i])) {
            score += bowls[i] - '0';
            bowl++;
            
            if (bowl == 2) {
                bowl = 0;
                frame++;
            }
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i-1] - '0');
            score += (bowls[i+1] == 'X') ? 10 : (isdigit(bowls[i+1]) ? bowls[i+1] - '0' : 10);
            
            bowl = 0;
            frame++;
        } else if (bowls[i] == '-') {
            bowl++;
            
            if (bowl == 2) {
                bowl = 0;
                frame++;
            }
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