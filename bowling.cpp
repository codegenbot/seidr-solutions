#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll - 1) * 10;
            roll = 0;
        } else {
            int currentRoll = stoi(string(1, c));
            score += currentRoll;
            if (roll < 2) roll++;
        }
    }
    return score;
}