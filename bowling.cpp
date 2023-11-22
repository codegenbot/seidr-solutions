#include <iostream>
#include <string>
using namespace std;

int calculateScore(string input) {
    int score = 0;
    int frame = 0;
    int rolls[21] = {0};

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'X') {
            rolls[frame] = 10;
            frame++;
        } else if (input[i] == '/') {
            rolls[frame] = 10 - rolls[frame - 1];
            frame++;
        } else if (input[i] == '-') {
            rolls[frame] = 0;
            frame++;
        } else {
            rolls[frame] = input[i] - '0';
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
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
    string input;
    cin >> input;

    int score = calculateScore(input);
    cout << score << endl;

    return 0;
}