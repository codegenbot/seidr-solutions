```
#include <iostream>
#include <string>
using namespace std;

int getFrameScore(const string& frame) {
    int score = 0;
    int frameSize = frame.size();
    int frameIndex = 0;

    for (int i = 0; i < 10; i++) {
        if (frame[frameIndex] == 'X') {
            score += 10;
            if (frame[frameIndex + 2] == 'X') {
                score += 10;
                if (frame[frameIndex + 4] == 'X')
                    score += 10;
                else
                    score += frame[frameIndex + 4] - '0';
            } else if (frame[frameIndex + 2] == '/') {
                score += 10 - (frame[frameIndex - 1] - '0');
            } else {
                score += frame[frameIndex + 2] - '0';
                if (frame[frameIndex + 2] == '/')
                    score += 10 - (frame[frameIndex + 2] - '0');
            }
            frameIndex += 2;
        } else if (frame[frameIndex + 1] == '/') {
            score += 10;
            if (frame[frameIndex + 2] == 'X')
                score += 10;
            else
                score += frame[frameIndex + 2] - '0';
            frameIndex += 3;
        } else {
            score += frame[frameIndex] - '0';
            score += frame[frameIndex + 1] - '0';
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
```