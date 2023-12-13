#include <iostream>
#include <string>

int score(const std::string& round) {
    int totalScore = 0;
    int frameIndex = 0;

    for (int i = 0; i < round.length(); i++) {
        if (round[i] == 'X') {
            totalScore += 10;
            
            // Strike in the last frame
            if (frameIndex == 9) {
                totalScore += (round[i + 1] == 'X') ? 10 : (round[i + 1] - '0');
                totalScore += (round[i + 2] == 'X') ? 10 : (round[i + 2] == '/' ? (10 - (round[i + 1] - '0')) : (round[i + 2] - '0'));
            }

            frameIndex++;
        } else if (round[i] == '/') {
            totalScore += (10 - (round[i - 1] - '0'));

            // Spare in the last frame
            if (frameIndex == 9) {
                totalScore += (round[i + 1] == 'X') ? 10 : (round[i + 1] - '0');
            }

            frameIndex++;
        } else if (round[i] == '-') {
            // No need to calculate anything, just move to the next roll
        } else {
            totalScore += (round[i] - '0');

            // Strike in the last frame
            if (frameIndex == 9 && round[i + 1] == '/') {
                totalScore += 10;
            }

            frameIndex++;
        }
    }

    return totalScore;
}

int main() {
    std::string round;
    std::cout << "Enter the sequence of bowls: ";
    std::cin >> round;
    
    std::cout << "Score: " << score(round) << std::endl;
    
    return 0;
}