#include <iostream>
#include <string>

int getScore(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    int throwIndex = 0;
    
    for (int i = 0; i < bowls.length(); i++) {
        if (frame == 10) {
            break;
        }
        
        if (bowls[i] == 'X') {
            score += 10;
            score += (bowls[i + 1] == 'X') ? 10 : (isdigit(bowls[i + 1]) ? bowls[i + 1] - '0' : 10);
            score += (bowls[i + 2] == 'X') ? 10 : (isdigit(bowls[i + 2]) ? bowls[i + 2] - '0' : 10);
            frame++;
            throwIndex = 0;
        } else if (bowls[i] == '/') {
            score += 10 - (isdigit(bowls[i - 1]) ? bowls[i - 1] - '0' : 10);
            score += (bowls[i + 1] == 'X') ? 10 : (isdigit(bowls[i + 1]) ? bowls[i + 1] - '0' : 10);
            frame++;
            throwIndex = 0;
        } else {
            score += (isdigit(bowls[i]) ? bowls[i] - '0' : 0);
            throwIndex++;
            
            if (throwIndex == 2) {
                frame++;
                throwIndex = 0;
            }
        }
    }
    
    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the bowls: ";
    std::cin >> bowls;
    
    int score = getScore(bowls);
    std::cout << "Score: " << score << std::endl;
    
    return 0;
}