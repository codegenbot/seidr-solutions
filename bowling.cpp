#include <iostream>
#include <vector>
using namespace std;

int bowling(string s) {
    int score = 0, frame = 0, ball = 0;
    vector<int> frames(10, 0);
    
    for (char c : s) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame-1];
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            frames[frame] += c - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (i < 9 && frames[i] == 10) {
            score += frames[i+1];
            if (frames[i+1] == 10) {
                score += frames[i+2];
            }
        } else if (i < 9 && frames[i] + frames[i+1] == 10) {
            score += frames[i+2];
        }
    }
    
    return score;
}

int main() {
    string s;
    std::cin >> s;
    std::cout << bowling(s) << std::endl;
    return 0;
}