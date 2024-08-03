#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    bool spare = false;
    bool strike = false;

    for (char c : s) {
        if (c == 'X') {
            strike = true;
            score += 10;
        } else if (c == '/') {
            spare = true;
            score += 5;
        } else if (c >= '1' && c <= '9') {
            int frameScore = c - '0';
            if (!strike) {
                score += frameScore;
            }
            strike = false;
            spare = false;
        } else {
            continue;
        }
    }

    // last two frames
    if (spare) {
        score += 5;
    } else {
        score += 10;
    }
    if (!strike && !spare) {
        score += 2;
    }

    return score;
}