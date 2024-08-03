#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    if (code.length() != 4 || guess.length() != 4) {
        cout << "Invalid input" << endl;
        return 0;
    }

    int blackPegs = 0, whitePegs = 0;
    vector<int> codeFreq(6, 0);
    vector<int> guessFreq(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i] - 'A']++;
            guessFreq[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (codeFreq[code[i] - 'A'] > 0) {
            whitePegs += min(codeFreq[code[i] - 'A'], guessFreq[guess[i] - 'A']);
            codeFreq[code[i] - 'A'] = max(0, codeFreq[code[i] - 'A'] - guessFreq[guess[i] - 'A']);
            guessFreq[guess[i] - 'A'] = max(0, guessFreq[guess[i] - 'A'] - codeFreq[code[i] - 'A']);
        }
    }

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}