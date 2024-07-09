#include <iostream>
#include <string>

int bowlingScore(std::string frame) {
    int score = 0;
    for (char c : frame) {
        if (c >= 'A' && c <= 'Z') {
            int num = (c - 'X') * 10;
            score += num;
        } else if (c >= '1' && c <= '9') {
            int num = c - '0';
            if (num == 10) {
                score += 10;
            } else {
                score += num;
            }
        }
    }
    return score;
}

int main() {
    std::cout << "Enter a string representing the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::string input;
    std::cin >> input;

    int score = bowlingScore(input);
    std::cout << "The score is: " << score << std::endl;

    return 0;
}