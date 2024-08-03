#include <vector>
using namespace std;

int bowlingScore(string str) {
    int score = 0;
    bool newFrame = true;
    vector<int> frames(11);
    for (char c : str) {
        if (c == '/') {
            newFrame = true;
        } else {
            if (!newFrame)
                frames[frames.size() - 1] = frames[frames.size() - 1] * 10 + c - '0';
            else
                frames.back() = frames.back() * 10 + c - '0';
            newFrame = false;
        }
    }
    
    for (int i = 0; i < 11; ++i) {
        if (frames[i] == 10) 
            score += 10 + max(frames[i+1]-1, 0);
        else if (frames[i] + frames[i+1] >= 10) 
            score += 10;
        else 
            score += frames[i] + frames[i+1];
    }
    
    return score;
}