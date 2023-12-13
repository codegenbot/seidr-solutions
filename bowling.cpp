#include <iostream>
#include <string>

int calculateScore(const std::string& round) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    for (int i = 0; i < round.length(); ++i) {
        if (frame > 10) {
            break;
        }
        
        char bowl = round[i];
        
        if (bowl == 'X') {
            score += 10;
            if (frame < 10) {
                score += (round[i + 1] == 'X') ? 10 : (round[i + 1] - '0');
                score += (round[i + 2] == 'X') ? 10 : (round[i + 2] - '0');
                bowlIndex += 1;
            }
            bowlIndex += 1;
        } else if (bowl == '/') {
            score += (10 - (round[i - 1] - '0'));
            if (frame < 10) {
                score += (round[i + 1] == 'X') ? 10 : (round[i + 1] - '0');
                bowlIndex += 1;
            }
            bowlIndex += 1;
        } else if (bowl == '-') {
            // do nothing
        } else {
            score += (bowl - '0');
            if (frame < 10 && bowlIndex % 2 == 0) {
                if (round[i + 1] == '/') {
                    score += (10 - (bowl - '0'));
                }
                bowlIndex += 1;
            }
            bowlIndex += 1;
        }
        
        if (bowlIndex % 2 == 0) {
            frame += 1;
        }
    }
    
    return score;
}

int main() {
    std::string round;
    std::cout << "Enter the round: ";
    std::cin >> round;
    
    int score = calculateScore(round);
    std::cout << "Score: " << score << std::endl;
    
    return 0;
}