#include <iostream>
using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    int freqCode[6] = {0}, freqGuess[6] = {0};
    for (char c : code) {
        freqCode[c - 'A']++;
    }
    for (char c : guess) {
        freqGuess[c - 'A']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        } else if (freqCode[guess[i] - 'A'] > 0) {
            count++;
            freqCode[guess[i] - 'A]--;
        }
    }

    for (int i = 0; i < 6; ++i) {
        if (freqGuess[i] > freqCode[i]) {
            count += freqGuess[i] - freqCode[i];
        }
    }

    return count;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;

    string guess;
    cout << "Enter your guess: ";
    cin >> guess;

    int white = whitePegs(code, guess);
    int black = 4 - white;

    cout << black << endl;
    cout << white << endl;

    return 0;
}