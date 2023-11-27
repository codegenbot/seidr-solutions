#include <iostream>
#include <string>
using namespace std;

int getScore(string frames) {
    int score = 0;
    int frameIndex = 0;

    for (int i = 0; i < 10; i++) {
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
                score += frames[frameIndex + 2] - '0';
                score += frames[frameIndex + 4] - '0';
            }

            frameIndex++;
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
    getline(cin, frames);

    int score = getScore(frames);
    cout << score << endl;

    return 0;
}