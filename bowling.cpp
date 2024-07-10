```
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (firstRollInFrame ? 10 : 0);
            firstRollInFrame = false;
        } else if (c == '/') {
            score += 10 - currentFrame;
            firstRollInFrame = true;
            currentFrame++;
        } else {
            int pins = c - '0';
            if (firstRollInFrame) {
                if (pins + pins <= 10) {
                    score += pins * 2;
                } else {
                    score += 10;
                }
                firstRollInFrame = false;
            } else {
                score += pins;
            }
        }
    }

    return score;
}