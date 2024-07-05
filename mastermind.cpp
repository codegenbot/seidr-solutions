#include <iostream>
using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    int freqCode[6] = {0};
    int freqGuess[6] = {0};

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            // Correct color, correct position
            count++;
            freqCode[code[i]-'A']++;
            freqGuess[guess[i]-'A']++;
        }
        else {
            // Correct color, wrong position
            freqCode[code[i]-'A']++;
            freqGuess[guess[i]-'A']++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        if (freqCode[i] > 0 && freqGuess[i] > 0) {
            count++;
        }
    }

    return count;
}

int blackPegs(string code, string guess) {
    int correctPosition = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            correctPosition++;
        }
    }

    return correctPosition;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;

    string guess;
    cout << "Enter your guess: ";
    cin >> guess;

    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);

    cout << black << endl;
    cout << white << endl;

    return 0;
}