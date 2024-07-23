#include <vector>
#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<char> codeVector(code.begin(), code.end());
    vector<char> guessVector(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark this position as visited
            guess[i] = ' '; // mark this position as visited
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (codeVector[j] == guess[i] && code[i] != guess[i]) {
                white++;
                codeVector[j] = ' '; // mark this position as visited
                guess[i] = ' '; // mark this position as visited
            }
        }
    }

    return black, white;
}

int main() {
    string code;
    cin >> code;
    string guess;
    cin >> guess;
    int black, white;
    tie(black, white) = mastermind(code, guess);
    cout << black << endl;
    cout << white << endl;
    return 0;
}