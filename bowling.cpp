#include <vector>
using namespace std;

int bowlingScore(string input) {
    int score = 0;
    int roll1, roll2;
    bool lastFrame = false;

    for (int i = 0; i < 10; ++i) {
        if (input[i] == '-') {
            lastFrame = true;
        } else {
            if (lastFrame) {
                score += (input[i] - '0') * 2;
            } else {
                roll1 = input[i] - '0';
                if (i < 8 && input[i+1] != '/') {
                    roll2 = input[i + 1] - '0';
                    if (roll1 + roll2 >= 10) {
                        score += 10 + input[i + 2] - '0';
                    } else {
                        score += roll1 + roll2;
                    }
                } else {
                    score += roll1 + (input[i+1] == '/' ? 0 : input[i+1] - '0');
                }
            }
        }
    }

    return score;
}