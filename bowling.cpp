#include <iostream>
#include <string>
using namespace std;

int getFrameScore(char bowl) {
    if (bowl == 'X')
        return 10;
    else if (bowl == '/')
        return 10;
    else if (bowl == '-')
        return 0;
    else
        return (bowl - '0');
}

int getFrameBonusScore(const string& frames, int frameIndex) {
    int bonusScore = 0;
    if (frames[frameIndex] == 'X')
        bonusScore += getFrameScore(frames[frameIndex + 1]);

    if (frames[frameIndex + 1] == '/')
        bonusScore += (10 - getFrameScore(frames[frameIndex]));

    return bonusScore;
}

int bowlingScore(const string& frames) {
    int score = 0;
    for (int i = 0; i < frames.length(); i++) {
        score += getFrameScore(frames[i]);
        if (frames[i] == 'X' || frames[i] == '/') {
            score += getFrameBonusScore(frames, i);
        }
    }
    return score;
}

int main() {
    string frames;
    cin >> frames;
    cout << bowlingScore(frames) << endl;
    return 0;
}