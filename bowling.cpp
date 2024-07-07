#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int rollCount = 0;

    for (char c : s) {
        if (!isdigit(c)) {
            if (c == '/') {
                if (currentRoll >= 10) {
                    score += currentRoll + 10;
                } else {
                    score += currentRoll + max(1, currentRoll);
                }
                currentRoll = 0;
                rollCount++;
            } else if (c == 'X') {
                currentRoll = 0;
                score += 10 + (rollCount < 2 ? 10 : 10 - 1 * min(10, rollCount));
            }
        } else {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }

    if (currentRoll >= 10) {
        score += currentRoll + 10;
    } else {
        score += currentRoll + max(1, currentRoll);
    }

    return score;
}

int main(int argc, char* argv[]) {
    std::cout << bowlingScore(argv[1]) << '\n';
    return 0;
}