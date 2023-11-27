#include <iostream>
#include <string>
using namespace std;

int calculateScore(string input) {
    int score = 0;
    int frame = 0;
    int roll = 0;
    int rolls[21];

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'X') {
            rolls[roll++] = 10;
            if (frame < 9) {
                rolls[roll++] = 0;
            }
            if (frame < 8) {
                rolls[roll++] = 0;
            }
            frame++;
        } else if (input[i] == '/') {
            rolls[roll++] = 10 - rolls[roll - 1];
            if (frame < 9) {
                rolls[roll++] = 0;
            }
            frame++;
        } else if (input[i] == '-') {
            rolls[roll++] = 0;
        } else {
            rolls[roll++] = input[i] - '0';
            if (roll % 2 == 0 || input[i] == '0') {
                frame++;
            }
        }
    }

    frame = 0;
    roll = 0;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'X') {
            score += 10 + rolls[roll + 1] + rolls[roll + 2];
            roll++;
        } else if (input[i] == '/') {
            score += 10 + rolls[roll + 1];
            roll += 2;
        } else if (input[i] == '-') {
            roll++;
        } else {
            score += rolls[roll++];
        }

        if (frame < 9 && (input[i] == 'X' || input[i] == '/')) {
            frame++;
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateScore(input) << endl;
    return 0;
}