#include <iostream>
#include <string>
using namespace std;

int calculateScore(string frames) {
    int score = 0;
    int frameIndex = 0;

    for (int frame = 0; frame < 10; frame++) {
        if (frames[frameIndex] == 'X') {
            score += 10;
            if (frames[frameIndex + 2] == 'X') {
                score += 10;
                if (frames[frameIndex + 4] == 'X') {
                    score += 10;
                } else {
                    score += frames[frameIndex + 4] - '0';
                }
            } else if (frames[frameIndex + 4] == '/') {
                score += 10;
            } else {
                score += frames[frameIndex + 2] - '0' + frames[frameIndex + 4] - '0';
            }
            frameIndex += 2;
        } else if (frames[frameIndex + 1] == '/') {
            score += 10;
            if (frames[frameIndex + 2] == 'X') {
                score += 10;
            } else {
                score += frames[frameIndex + 2] - '0';
            }
            frameIndex += 2;
        } else {
            score += frames[frameIndex] - '0' + frames[frameIndex + 1] - '0';
            frameIndex += 2;
        }
    }

    return score;
}

int main() {
    string frames;
    cin >> frames;
    int score = calculateScore(frames);
    cout << score << endl;
    return 0;
}