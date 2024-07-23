#include <iostream>
#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    vector<int> rolls(2, 0);
    
    for (char c : s) {
        if (c == 'X') {
            score += 10 + rolls[1];
            rolls[0] = 10;
            rolls[1] = 0;
            frame++;
        } else if (c == '/') {
            score += 10 - rolls[0];
            rolls[0] = 0;
            frame++;
        } else {
            if (rolls[0] < 10) {
                rolls[0] = rolls[0] * 10 + (c - '0');
            } else {
                rolls[1] = rolls[1] * 10 + (c - '0');
            }
        }
    }
    
    return score;
}