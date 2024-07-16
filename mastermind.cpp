#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        int count = 0;
        for (char d : code) {
            if (c == d) {
                count++;
            }
        }
        if (count > 1 && code.find(c) != string::npos) {
            white += count - 1;
        } else if (count == 1) {
            white++;
        }
    }

    return black + white;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter a guess: ";
    cin >> guess;
    int result = mastermind(code, guess);
    cout << "White pegs: " << (result - 4) << endl;
    cout << "Black pegs: " << min(4, result) << endl;
    return 0;
}