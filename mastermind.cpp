#include <iostream>
#include <map>
#include <algorithm>
#include <set>

using namespace std;

bool isValidCharacter(char ch) {
    const string validCharacters = "ABCDEF"; // Assuming valid characters are A, B, C, D, E, F
    return validCharacters.find(ch) != string::npos;
}

int main() {
    string code, guess;
    cin >> code >> guess;

    if (code.size() != 4 || guess.size() != 4) {
        cout << "Invalid input: Code and guess should be 4 characters each." << endl;
        return 1;
    }

    for (char ch : code + guess) {
        if (!isValidCharacter(ch)) {
            cout << "Invalid input: Characters should be one of A, B, C, D, E, F." << endl;
            return 1;
        }
    }

    set<int> unmatchedCode, unmatchedGuess;
    int blackPegs = 0, whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            unmatchedCode.insert(code[i]);
            unmatchedGuess.insert(guess[i]);
        }
    }

    for (auto it = unmatchedCode.begin(); it != unmatchedCode.end(); ++it) {
        auto codeCount = count(code.begin(), code.end(), *it);
        auto guessCount = count(guess.begin(), guess.end(), *it);
        whitePegs += min(codeCount, guessCount);
    }

    cout << whitePegs << endl << blackPegs << endl;

    return 0;
}