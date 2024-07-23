#include <iostream>
using namespace std;

int bowling(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int rolls[22] = {0};
    
    for (char c : s) {
        if (c == 'X') {
            rolls[ball] = 10;
            ball++;
            if (frame < 10) frame++;
        } else if (c == '/') {
            rolls[ball] = 10 - rolls[ball - 1];
            ball++;
            if (frame < 10) frame++;
        } else if (c == '-') {
            rolls[ball] = 0;
            ball++;
        } else {
            rolls[ball] = c - '0';
            ball++;
            if (ball % 2 == 0) {
                if (frame < 10) frame++;
            }
        }
    }
    
    for (int i = 0; i < 20; i++) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i + 1] + rolls[i + 2];
        } else if (rolls[i] + rolls[i + 1] == 10) {
            score += 10 + rolls[i + 2];
            i++;
        } else {
            score += rolls[i] + rolls[i + 1];
            i++;
        }
    }
    
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowling(s) << endl;
    return 0;
}