#include <iostream>
#include <string>
#include <vector>
using namespace std;

int bowlingScore(const string& s) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : s) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame - 1];
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball = 0;
            frame++;
        } else {
            frames[frame] += c - '0';
            ball = 1 - ball;
            if (ball == 0) {
                frame++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (frames[i] == 10 && i < 9) {
            score += frames[i + 1];
            if (frames[i + 1] == 10) {
                score += frames[i + 2];
            }
        } else if (frames[i] + frames[i - 1] == 10 && i < 9) {
            score += frames[i + 1];
        }
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}