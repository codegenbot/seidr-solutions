#include <string>
#include <iostream>

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
    std::string s = "1/81/2/34//5+64/7-3+/--8-9";
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}