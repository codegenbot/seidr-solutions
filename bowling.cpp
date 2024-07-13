#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll == 10) {
                score += 10;
            } else {
                score += max(1, currentRoll);
                if (isdigit(s[s.find('/') - 1])) {
                    int nextRoll = stoi(s.substr(s.find('/') + 1));
                    score += nextRoll;
                }
            }
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    if (currentRoll > 0) {
        score += max(1, currentRoll);
    }
    return score;