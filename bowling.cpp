```cpp
#include <iostream>
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    int currentRoll = 0;
    int frameNumber = 1;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') { // Strike
            score += 10 + bowlingScoreForExtraRolls(input, i);
            i += 2; // Skip the '/' and the next character
            frameNumber++;
        } else if (input[i] == '/') {
            currentRoll = 0;
            frameNumber++;
        } else if (isdigit(input[i])) { 
            currentRoll = currentRoll * 10 + (input[i] - '0');
            if (i < input.size() - 1 && input[i+1] == '/') {
                score += currentRoll;
                i++; // Skip the '/'
                currentRoll = 0;
                frameNumber++;
            }
        } 
    }

    return score;
}

int bowlingScoreForExtraRolls(std::string input, int i) {
    int score = 0;

    for (int j = i + 1; j < input.size(); j++) {
        if (input[j] == 'X') { // Strike
            score += 10;
            continue;
        } else if (isdigit(input[j])) { 
            int currentRoll = (input[j] - '0') * ((j+1) < input.size() && input[j+1] == '/') ? 10 : 1;
            return score + currentRoll;
        }
    }

    return score; // Return score without considering the last frame
}

int main() {
    std::cout << bowlingScore("X|---5-8-|X||25--|-1-3-4-6-8-9-7");
}