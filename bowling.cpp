#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
        } else {
            currentRoll = (currentRoll * 10 + (c - '0') * 10) % 11;
        }
    }
    return score;
}