#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int rolls = 0;
    
    vector<int> frames(10);
    
    for (char c : s) {
        if (c == 'X') {
            score += 10 + frames[frames.size() - 2];
            frame++;
        } else if (c == '/') {
            score += 10 - frames[frames.size() - 1];
            frame++;
        } else {
            int pins = c - '0';
            if (pins == 10) {
                score += 10;
                frame++;
                rolls++;
            } else {
                score += pins;
                frames.push_back(pins);
                rolls++;
                if (rolls % 2 != 0 && s[frames.size() * 2 - 1] == 'X') {
                    score -= pins;
                }
            }
        }
    }
    
    return score;
}