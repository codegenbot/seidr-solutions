#include <iostream>
#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < input.length(); i++) {
        char currentBowl = input[i];

        if (currentBowl == 'X') {
            score += 10;
            if (frame < 10) {
                score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
                score += (input[i + 2] == 'X') ? 10 : (input[i + 2] - '0');
            }
            frame++;
        } else if (currentBowl == '/') {
            score += (10 - (input[i - 1] - '0'));
            score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
            frame++;
        } else if (currentBowl == '-') {
            // Do nothing, continue to the next bowl
        } else {
            score += (currentBowl - '0');
            if (bowlIndex % 2 == 0) {
                if (currentBowl != '-') {
                    frame++;
                }
            }
        }
        bowlIndex++;
    }

    return score;
}

int main() {
    std::string input;
    std::cout << "Enter the string representing the individual bowls: ";
    std::cin >> input;

    int score = calculateScore(input);
    std::cout << "The score of the round is: " << score << std::endl;

    return 0;
}