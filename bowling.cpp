#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    for (char c : s) {
        if (c == '/') {
            score += max(10 - '0', 1);
            rolls++;
        } else if (c == 'X') {
            score += 30;
            rolls++;
        } else if (isdigit(c)) {
            int roll = c - '0';
            score += roll;
            rolls++;
        }
    }
    return score;
}