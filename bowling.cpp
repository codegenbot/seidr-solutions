#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> frames;
    
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (roll * 10);
            roll = 0;
            frames.push_back(10);
        } else if (c == '/') {
            frames.push_back(10 - roll);
            roll = 0;
        } else if (isdigit(c)) {
            int val = c - '0';
            if (val + roll <= 10) {
                roll += val;
            } else {
                score += 10 + (roll * 10);
                roll = val;
                frames.push_back(10);
            }
        }
    }
    
    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 2) {
            if (i != frames.size() - 1) {
                score += 12;
            } else {
                score += 2 + (roll * 10);
            }
        } else if (frames[i] > 2) {
            score += 3 * (frames[i]);
        }
    }
    
    return score;
}