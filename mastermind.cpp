#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    map<char, int> codeFreq, guessFreq;
    
    codeFreq.clear();
    guessFreq.clear();

    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }

    for (auto it = codeFreq.begin(); it != codeFreq.end(); ++it) {
        whitePegs += min(it->second, guessFreq[it->first]);
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && codeFreq[code[i]] > 0 && guessFreq[guess[i]] > 0) {
            whitePegs++;
            codeFreq[code[i]]--;
            guessFreq[guess[i]]--;
        }
    }

    cout << whitePegs << endl << blackPegs << endl;

    return 0;
}