#include <iostream>
#include <string>
using namespace std;

int getScore(string bowls) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    int rolls[21] = {0};

    for (char c : bowls) {
        if (c == 'X') {
            rolls[roll++] = 10;
            if (frame < 10) {
                rolls[roll++] = 0;
            }
            frame++;
        } else if (c == '/') {
            rolls[roll++] = 10 - rolls[roll - 2];
            if (frame < 10) {
                rolls[roll++] = 0;
            }
            frame++;
        } else if (c == '-') {
            rolls[roll++] = 0;
        } else {
            rolls[roll++] = c - '0';
            if (frame < 10) {
                frame += roll % 2;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i * 2] == 10) {
            score += 10 + rolls[i * 2 + 2] + rolls[i * 2 + 3];
            if (rolls[i * 2 + 2] == 10) {
                score += rolls[i * 2 + 4];
            }
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
    cout << getScore(bowls) << endl;
    return 0;
}