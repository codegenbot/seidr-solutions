```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    vector<int> frames;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            frames.push_back(i + 1);
        }
    }

    for (int i = 0; i < frames.size(); i++) {
        int frame = frames[i];
        string str = s.substr(0, frame);
        int first = str[str.length() - 1] - '0';
        int second = str[str.length() - 2] - '0';
        if (frame == 10) {
            score += 10;
        } else if (first + second == 10) {
            score += 10;
        } else {
            score += first + second;
            if (first + second < 10) {
                score += s[str.length() - 1] - '0';
            }
        }
    }

    return score;
}