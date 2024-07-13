#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < 10; i++) {
        if(s[i] == 'X') {
            score += 30;
        } else if(s[i] >= '1' && s[i] <= '9' && s[i+1] >= '0' && s[i+1] <= '9') {
            int currentFrame = (s[i] - '0') * 10 + (s[i+1] - '0');
            score += currentFrame;
        } else if(s[i] >= '1' && s[i] <= '9' && s[i+1] == '/') {
            int currentFrame = (s[i] - '0') * 10 + 10 - (s[i+2] - '0');
            score += currentFrame;
        }
    }
    return score;
}