#include <iostream>
using namespace std;

int whitePegs(string code, string guess) {
    int colorCorrect = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            // correct position
            return 1;
        } else if (count(guess[i], code) > 0) {
            // correct color, wrong position
            colorCorrect++;
        }
    }
    return colorCorrect;
}

int blackPegs(string code, string guess) {
    int correctPosition = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j]) {
                if (i == j) {
                    // correct color and position
                    correctPosition++;
                } else {
                    // correct color, wrong position (already counted in whitePegs)
                }
            }
        }
    }
    return 4 - whitePegs(code, guess) - correctPosition;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;

    string guess;
    cout << "Enter your guess: ";
    cin >> guess;

    int black = blackPegs(code, guess);
    int white = 4 - black;

    cout << black << endl;
    cout << white << endl;

    return 0;
}