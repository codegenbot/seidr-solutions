#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    vector<char> codeVector(code.begin(), code.end());
    vector<char> guessVector(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (codeVector[i] == guessVector[i]) {
            black++;
            codeVector[i] = '\0';
            guessVector[i] = '\0';
        }
    }

    vector<char> remainingCode(codeVector.begin() + black, codeVector.end());
    vector<char> remainingGuess(guessVector.begin() + black, guessVector.end());

    for (int i = 0; i < 4; i++) {
        int j = 0;
        while (j < 4) {
            if (remainingCode[j] == remainingGuess[i]) {
                white++;
                remainingCode[j] = '\0';
                break;
            }
            j++;
        }
    }

    return black + white;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}