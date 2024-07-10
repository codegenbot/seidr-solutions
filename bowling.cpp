#include <iostream>
#include <string>

int bowlingScore(string input) {
    int score = 0;
    int currentRoll = 0;
    int frameNumber = 1;

    for (int i = 0; i < input.size(); i++) {
        if (input.substr(i, 2) == "X/") { // Strike
            score += 10 + bowlingScoreForExtraRolls(input.substr(i+2), 0);
            i += 3;
            frameNumber++;
        } else if (input[i] == '/') {
            currentRoll = 0;
            frameNumber++;
        } else if (isdigit(input[i])) { // Number of pins knocked down
            currentRoll = (currentRoll * 10) + (input[i] - '0');
            if (i < input.size() - 1 && input[i+1] == '/') {
                score += currentRoll;
                i++; // Skip the '/'
                currentRoll = 0;
                frameNumber++;
            }
        } else {
            continue; // ignore non-numerical characters
        }
    }

    return score;
}

int bowlingScoreForExtraRolls(string input, int i) {
    int score = 0;

    for (int j = i + 1; j < input.size(); j++) {
        if (input.substr(j, 2) == "X/") { // Strike
            score += 10;
            continue;
        } else if (isdigit(input[j])) { // Number of pins knocked down
            int currentRoll = (input[j] - '0');
            if (j < input.size() - 1 && input[j+1] == '/') {
                score += currentRoll;
                j++; // Skip the '/'
                continue;
            }
            return score + currentRoll;
        }
    }

    return score; // Return score without considering the last frame
}

int main() {
    std::cout << bowlingScore("X|---5-8-|X||25--|-1-3-4-6-8-9-7");
}