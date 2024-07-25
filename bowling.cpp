#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int rollCount = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (rollCount > 0 ? 10 : 0);
            rollCount++;
        } else if (c == '/') {
            score += 10 - (10 - stoi(string(1, c)) * 2);
            rollCount++;
        } else {
            score += stoi(string(1, c));
            rollCount++;
        }
    }
    return score;
}