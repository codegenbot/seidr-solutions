#include <iostream>
#include <string>
using namespace std;

int calculateScore(string bowls) {
    int score = 0;
    int frame = 0;
    int roll = 0;
    int rolls[21] = {0};

    for (char c : bowls) {
        if (c == 'X') {
            rolls[roll++] = 10;
            frame++;
        } else if (c == '/') {
            rolls[roll++] = 10 - rolls[roll-1];
            frame++;
        } else if (c == '-') {
            rolls[roll++] = 0;
        } else {
            rolls[roll++] = c - '0';
            if (frame % 2 == 1) {
                frame++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i * 2] == 10) {
            score += 10 + rolls[(i + 1) * 2] + rolls[(i + 1) * 2 + 1];
        } else if (rolls[i * 2] + rolls[i * 2 + 1] == 10) {
            score += 10 + rolls[(i + 1) * 2];
        } else {
            score += rolls[i * 2] + rolls[i * 2 + 1];
        }
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    int score = calculateScore(bowls);
    cout << score << endl;
    return 0;
}