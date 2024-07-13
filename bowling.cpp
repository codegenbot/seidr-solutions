#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    vector<int> rolls(2, 0);
    
    for (char c : s) {
        if (c == 'X') {
            score += 10 + rolls[1];
            rolls.assign({0, 0});
            frame++;
        } else if (c == '/') {
            score += rolls[0] + 10;
            rolls.assign({0, 0});
            frame++;
        } else {
            int roll = c - '0';
            rolls[0] = roll;
            if (frame < 9) continue;
            if (rolls[1] != 0) score += rolls[1];
            if (c == 'X' || c == '/') continue;
            score += min(roll, 10);
        }
    }
    
    return score;
}