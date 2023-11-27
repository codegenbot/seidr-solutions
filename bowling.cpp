#include <iostream>
#include <string>
using namespace std;

int calculateScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int rolls[21];

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) {
                rolls[ball++] = 0;
            }
            if (frame < 9) {
                rolls[ball++] = 0;
            }
            frame++;
        } else if (c == '/') {
            rolls[ball++] = 10 - rolls[ball - 1];
            if (frame < 10) {
                rolls[ball++] = 0;
            }
            frame++;
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
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
    string input;
    cin >> input;

    int score = calculateScore(input);
    cout << score << endl;

    return 0;
}