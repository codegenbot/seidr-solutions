#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int codeFreq[6] = {0};
    int guessFreq[6] = {0};

    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
            codeFreq[code[i] - 'A'] += 1;
            guessFreq[guess[i] - 'A'] += 1;
        }
    }

    whitePegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && codeFreq[code[i] - 'A'] > 0 && guessFreq[guess[i] - 'A'] > 0) {
            ++whitePegs;
            --codeFreq[code[i] - 'A'];
            --guessFreq[guess[i] - 'A'];
        }
    }

    cout << whitePegs << " " << blackPegs << endl;

    return 0;
}