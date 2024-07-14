#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll >= 2) {
                score += max(10 - roll, 1);
            }
            roll = 0;
        } else if (isdigit(c)) {
            roll = roll * 10 + (c - '0');
        }
    }
    if (roll >= 2) {
        score += max(10 - roll, 1);
    }
    return score;
}