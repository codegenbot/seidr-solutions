#include <iostream>
#include <map>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

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