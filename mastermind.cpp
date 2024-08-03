#include <iostream>
#include <vector>

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
            codeFreq[code[i] - '0']++;
            guessFreq[guess[i] - '0']++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        whitePegs += min(codeFreq[i], guessFreq[i]);
    }

    whitePegs -= blackPegs;

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}