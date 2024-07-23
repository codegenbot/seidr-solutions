#include <vector>
#include <iostream>
#include <string>

int mastermind(const string& code, const string& guess) {
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
        if (count > 1 && c != code[0] && c != code[1] && c != code[2] && c != code[3]) {
            white += count - 1;
        } else if (count == 1) {
            for (int i = 0; i < 4; ++i) {
                if (c == guess[i]) {
                    black++;
                }
            }
        }
    }

    return black + white;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter the guess: ";
    cin >> guess;

    int result = mastermind(code, guess);

    cout << "Number of black pegs: " << result - (result / 4) << endl;
    cout << "Number of white pegs: " << result / 4 << endl;

    return 0;
}