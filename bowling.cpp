#include <iostream>
#include <string>
using namespace std;

int calculateScore(string frames) {
    int score = 0;
    int frameIndex = 0;
    
    for (int i = 0; i < 10; i++) {
        if (frames[frameIndex] == 'X') {
            score += 10;
            if (frames[frameIndex + 2] == 'X' || frames[frameIndex + 2] == '/') {
                score += 10 + frames[frameIndex + 4] - '0';
            } else {
                score += frames[frameIndex + 2] - '0' + frames[frameIndex + 3] - '0';
            }
            frameIndex++;
        } else if (frames[frameIndex + 1] == '/') {
            score += 10 + frames[frameIndex + 2] - '0';
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