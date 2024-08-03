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

    for (int i = 0; i < 6; ++i) {
        if (codeFreq[i] > 0 && guessFreq[i] > 0) {
            whitePegs += min(codeFreq[i], guessFreq[i]);
        }
    }

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}