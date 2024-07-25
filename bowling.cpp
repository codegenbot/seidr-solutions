#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll = 2;
        } else if (c == '/') {
            score += (10 - roll);
            roll = 0;
        } else {
            int val = c - '0';
            score += val;
            roll--;
        }
    }
    return score;
}