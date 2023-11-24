#include <iostream>
#include <string>

int score(const std::string& bowls) {
    int totalScore = 0;
    int frame = 0;
    int numBowls = bowls.length();
    
    for (int i = 0; i < numBowls; i++) {
        if (frame == 10) {
            break;
        }
        
        if (bowls[i] == 'X') {
            totalScore += 10;
            
            if (i + 2 < numBowls) {
                if (bowls[i + 2] == '/') {
                    totalScore += 10;
                } else {
                    totalScore += (bowls[i + 1] - '0') + (bowls[i + 2] - '0');
                }
            }
            
            frame++;
        } else if (bowls[i] == '/') {
            totalScore += (10 - (bowls[i - 1] - '0'));
            
            if (i + 1 < numBowls) {
                totalScore += (bowls[i + 1] - '0');
            }
            
            frame++;
        } else {
            totalScore += (bowls[i] - '0');
            
            if (i + 1 < numBowls && bowls[i + 1] == '/') {
                totalScore += (10 - (bowls[i] - '0'));
            }
            
            frame++;
        }
    }
    
    return totalScore;
}

int main() {
    std::string bowls;
    std::cin >> bowls;
    
    int result = score(bowls);
    std::cout << result << std::endl;
    
    return 0;
}