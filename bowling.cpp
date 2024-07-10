#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    int rollCount1 = 0;
    int rollCount2 = 0;
    for (char c : input) {
        if (c == '/') {
            if (rollCount1 + rollCount2 >= 10) {
                score += (10 - rollCount1) * 10 + rollCount2;
            } else {
                score += rollCount1 * 10 + rollCount2;
            }
            rollCount1 = 0;
            rollCount2 = 0;
        } else if ('1' <= c && c <= '9') {
            if (rollCount1 == 0) {
                rollCount1 = 10 + (c - '0');
            } else {
                rollCount2 = rollCount2 * 10 + (c - '0');
            }
        }
    }
    return score;
}

int main() {
    std::string input; 
    int result = bowlingScore(input);
    return result;
}