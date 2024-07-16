#include <string>
#include <iostream>

int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;

    for (char c : s) { 
        if (c == 'X') {
            score += 10 + 30; // strike, add the bonus
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 10; // add the roll and the bonus
            currentRoll = 0;
        } else {
            if (currentRoll > 9) { 
                int firstRoll = c - '0';
                score += firstRoll + 10; 
                currentRoll = 10 - c;
            } else {
                currentRoll *= 10;
                currentRoll += c - '0';
            }
        }
    }

    return score;
}

int main() {
    std::string input = "XXXX/--;";
    int score = bowlingScore(input);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}