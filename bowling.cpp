#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;

    for (char c : s) {
        if (c == '/') {
            if (roll > 9)
                score += 10;
            else
                score += roll;
            roll = 0;
        } else if (isdigit(c)) {
            roll *= 10;
            roll += c - '0';
        }
    }

    if (roll > 9)
        score += 10;
    else
        score += roll;

    return score;
}

int main() {
    std::string s;
    std::cout << "Enter the string representing the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::getline(std::cin, s);
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}