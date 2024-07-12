#include <string>
#include <iostream>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i = 0; i < 6; i++) {
        int countCode = 0, countGuess = 0;
        for(int j = 0; j < 4; j++) {
            if(code[j] == (char)(i + 'A')) countCode++;
            if(guess[j] == (char)(i + 'A')) countGuess++;
        }
        white += min(countCode, countGuess);
    }

    return black + white;
}

int main() {
    string code, guess;
    cout << "Enter the mastermind code: ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    int result = mastermind(code, guess);
    cout << "White pegs: " << result - 4 << ", Black pegs: " << result - (result - 4) << endl;
    return 0;