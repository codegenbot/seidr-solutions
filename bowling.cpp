#include <iostream>
#include <string>
using namespace std;

int getFrameScore(const string& frame) {
    int score = 0;
    int frameIndex = 0;

    for (int i = 0; frameIndex < frame.size(); i++) {
        if (frame[frameIndex] == 'X' && i != 9) {
            score += 10;
            if (frameIndex + 2 < frame.size()) {
                score += frame[frameIndex + 2] - '0';
                if (frame[frameIndex + 4] == 'X' && frameIndex + 4 < frame.size())
                    score += 10;
            }
            frameIndex += 2;
        } else if (frame[frameIndex + 1] == '/' && i != 9) {
            score += 10;
            if (frameIndex + 2 < frame.size())
                score += frame[frameIndex + 2] - '0';
            frameIndex += 3;
        } else {
            score += frame[frameIndex] - '0' + frame[frameIndex + 1] - '0';
            frameIndex += 2;
        }
    }

    return score;
}

int main() {
    string frame;
    cin >> frame;
    int score = getFrameScore(frame);
    cout << score << endl;
    return 0;
}