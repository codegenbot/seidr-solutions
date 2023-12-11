#include <iostream>
#include <string>

int calculateScore(std::string bowlingSequence) {
    int score = 0;
    int frame = 1;
    int rolls = 0;
    
    for (char bowl : bowlingSequence) {
        if (frame == 10) { // Last frame
            if (bowl == 'X' || bowl == '/') { // Bonus rolls
                score += (10 - frame) * 10;
            } else {
                score += bowl - '0';
            }
            rolls++;
            if (rolls == 3) {
                break; // No more rolls needed
            }
        } else { // Regular frame
            if (bowl == 'X') { // Strike
                score += 10;
                frame++;
                rolls = 0;
            } else if (bowl == '/') { // Spare
                score += 10;
                frame++;
                rolls = 0;
            } else { // Open frame
                score += bowl - '0';
                if (rolls % 2 == 1) {
                    frame++;
                }
                rolls++;
            }
        }
    }
    
    return score;
}

int main() {
    std::string bowlingSequence;
    std::cout << "Enter the bowling sequence: ";
    std::cin >> bowlingSequence;
    int score = calculateScore(bowlingSequence);
    std::cout << "Score: " << score << std::endl;
     
    return 0;
}