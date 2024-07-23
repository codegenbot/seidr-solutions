#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    int currentRoll = 0;
    bool lastRoll = false;
    
    for(int i = 0; i < input.size(); ++i) {
        if(input[i] == '/') {
            if(currentRoll > 0) {
                score += currentRoll;
                currentRoll = 0;
            }
        } else if(input[i] >= 'X' && input[i] <= 'X') {
            score += 10;
            lastRoll = true;
        } else if(input[i] == '+') {
            continue;
        } else if(input[i].isdigit()) {
            currentRoll = currentRoll * 10 + (input[i] - '0');
        }
    }
    
    if(currentRoll > 0) score += currentRoll;
    
    if(lastRoll && currentRoll > 0) score += currentRoll;
    
    return score;
}

int main() {
    int score = bowlingScore("X/XXXX/8+5,X");
    std::cout << "The score is: " << score << std::endl;
    return 0;
}