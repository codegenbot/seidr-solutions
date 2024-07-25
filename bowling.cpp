#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    vector<int> frames;
    for (char c : s) {
        if (c == 'X') {
            frames.push_back(10);
        } else if (c == '/') {
            int spare = 10 - stoi(string({c}).c_str());
            frames.push_back(10 + spare);
        } else {
            int frameScore = 0;
            for (char d : string({c})) {
                if (d == 'X') {
                    frameScore += 10;
                    break;
                } else if (d == '/') {
                    int lastRoll = 10 - stoi(string({d}).c_str());
                    frameScore += 10 + lastRoll;
                    break;
                } else {
                    frameScore += stoi(string({d})) * 1;
                }
            }
            frames.push_back(frameScore);
        }
    }
    
    for (int i = 0; i < frames.size(); i++) {
        score += frames[i];
        if (i < 9) {
            if (frames[i] == 10) continue;
            else if (frames[i] + frames[i+1] > 10) 
                score += 10 - frames[i]; 
            else score += frames[i]; 
        }
    }
    
    return score;
}