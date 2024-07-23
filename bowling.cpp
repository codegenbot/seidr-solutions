#include <iostream>
#include <string>
using namespace std;

int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int rolls[21] = {0};

    for (char c : bowls) {
        if (c == 'X') {
            rolls[ball] = 10;
            rolls[ball + 1] = 0;
            ball += 2;
            frame++;
        } else if (c == '/') {
            rolls[ball] = 10 - rolls[ball - 1];
            ball++;
            frame++;
        } else if (c == '-') {
            rolls[ball] = 0;
            ball++;
        } else {
            rolls[ball] = c - '0';
            ball++;
            if (ball % 2 == 0) {
                frame++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i * 2] == 10) {
            score += 10 + rolls[i * 2 + 2] + rolls[i * 2 + 3];
        } else if (rolls[i * 2] + rolls[i * 2 + 1] == 10) {
            score += 10 + rolls[i * 2 + 2];
        } else {
            score += rolls[i * 2] + rolls[i * 2 + 1];
        }
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateBowlingScore(bowls) << endl;
    return 0;
}