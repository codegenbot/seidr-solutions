#include <iostream>
#include <string>

int bowlingScore(string input) {
    int score = 0;
    bool isStrike = false;
    int currentFrame = 1;

    for (char c : input) {
        if (c == '|') continue; // Skip frame separators
        else if (c == 'X') { // Strike
            score += 10 + 10 + 10;
            isStrike = true;
        }
        else if (c == '-') { // Spare
            if (!isStrike) {
                score += 10;
                currentFrame++;
            }
        }
        else { // Normal roll
            int pinCount = c - '0'; // Convert char to int
            score += pinCount;
            if (currentFrame < 10) {
                currentFrame++;
            }
            if (!isStrike && currentFrame == 10) {
                score += pinCount; // Add any remaining pins
            }
        }
    }

    return score;
}

int main() {
    std::cout << bowlingScore("X|---5-8-|X||25--|-1-3-4-6-8-9-7");
}