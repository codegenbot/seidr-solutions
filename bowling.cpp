#include <vector>
using namespace std;

int bowlingScore(string input) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '/') {
            score += min(stoi(input.substr(i-1,1)),10);
            currentFrame++;
            if (currentFrame > 10) return score;
        }
    }
    return score;
}