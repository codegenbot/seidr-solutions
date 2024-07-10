#include <iostream>
#include <string>

int roll(int frame) {
    int pin = 10; 
    int rolls = 0;

    while (pin > 0 && rolls < 2) { 
        if (pin <= 1) break;
        
        if (std::cin >> pin) {
            rolls++;
        } else {
            return -1;
        }
    }

    return (frame == 0) ? pin : (10 + frame);
}

int bowlingScore(const std::string& input) {
    int score = 0;
    int rollCount = 0;
    for (char c : input) {
        if (c == '/') {
            score += roll(rollCount);
            rollCount = 0;
        } else if ('1' <= c && c <= '9') {
            rollCount *= 10 + (c - '0');
        }
    }
    score += roll(rollCount);
    return score;
}

int main() {
    std::cout << "Enter your bowling scores: ";
    std::string input; 
    std::getline(std::cin, input);
    int result = bowlingScore(input);
    return 0;
}