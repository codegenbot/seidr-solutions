#include <iostream>
#include <string>
using namespace std;

int getScore(string input) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    int rolls[21];

    for (char c : input) {
        if (c == 'X') {
            rolls[roll++] = 10;
            if (frame < 10) {
                rolls[roll++] = 0;
            }
        } else if (c == '/') {
            rolls[roll++] = 10 - rolls[roll - 2];
        } else if (c == '-') {
            rolls[roll++] = 0;
        } else {
            rolls[roll++] = c - '0';
        }

        if (frame < 10 && (c == 'X' || roll % 2 == 0)) {
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        int rollIndex = i * 2;
        if (rolls[rollIndex] == 10) {
            score += 10 + rolls[rollIndex + 2] + rolls[rollIndex + 3];
        } else if (rolls[rollIndex] + rolls[rollIndex + 1] == 10) {
            score += 10 + rolls[rollIndex + 2];
        } else {
            score += rolls[rollIndex] + rolls[rollIndex + 1];
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    int result = getScore(input);
    cout << result << endl;
    return 0;
}