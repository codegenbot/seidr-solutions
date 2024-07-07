#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    vector<pair<char, bool>> codeMap(6), guessMap(6);

    for (char c : code) {
        codeMap[c] = {c, true};
    }

    for (int i = 0; i < 4; ++i) {
        for (char c : code) {
            if (codeMap[c].second && c == guess[i]) {
                blackPegs++;
                codeMap[c].second = false;
            }
        }
    }

    for (pair<char, bool> p : codeMap) {
        if (p.second) {
            whitePegs++;
        }
    }

    return blackPegs;
}

int main() {
    string code, guess;
    cout << "Enter Mastermind code: ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    int result = mastermind(code, guess);
    cout << "Black pegs: " << result << endl;
    return 0;
}