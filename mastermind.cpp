#include <vector>
#include <iostream>
using namespace std;

int getMastermindPegs(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<int> codeCount(6, 0);
    for (char c : code) {
        codeCount[c - 'A']++;
    }

    vector<int> guessCount(6, 0);
    for (char c : guess) {
        guessCount[c - 'A']++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            codeCount[guess[i] - 'A']--;
            guessCount[guess[i] - 'A']--;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (codeCount[guess[i] - 'A'] > 0) {
            white++;
            codeCount[guess[i] - 'A']--;
        }
    }

    return to_string(white) + "\n" + to_string(black);
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter a guess: ";
    cin >> guess;
    cout << getMastermindPegs(code, guess) << endl;

    return 0;
}