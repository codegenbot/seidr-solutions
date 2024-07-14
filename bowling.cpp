#include <iostream>

int bowlingScore(std::string input) {
    int score = 0;
    int currentRoll1 = 0, currentRoll2 = 0;

    for (char c : input) { 
        if (c == 'X') {
            score += 30;
            currentRoll1 = 0; currentRoll2 = 0;
        } else if (c == '/') {
            score += currentRoll1 + 10;
            currentRoll1 = 0; currentRoll2 = 0;
        } else if (c >= '0' && c <= '9') {
            if (currentRoll1 == 0) {
                currentRoll1 = c - '0';
            } else {
                currentRoll2 += c - '0';
            }
        } else if (c == '-') {
            score += currentRoll1 + 10;
            currentRoll1 = 0; currentRoll2 = 0;
        }
    }

    if (currentRoll1 > 0 || currentRoll2 > 0) {
        if (currentRoll1 + currentRoll2 >= 10) {
            score += currentRoll1 + 10;
        } else {
            score += currentRoll1 + currentRoll2;
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;
    int score = bowlingScore(input);
    std::cout << "The total score is: " << score << std::endl;
    return 0;
}