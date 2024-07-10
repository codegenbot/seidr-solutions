#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

bool isValidInput(const string& str) {
    if (str.length() != 4) return false;
    for (char c : str) {
        if (c < 'A' || c > 'E') return false;
    }
    return true;
}

int main() {
    string code, guess;
    cin >> code >> guess;

    if (!isValidInput(code) || !isValidInput(guess)) {
        cout << "Invalid input format." << endl;
        return 1;
    }

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
        whitePegs += std::min(codeFreq[it->first], guessFreq[it->first]);
    }

    cout << whitePegs << endl << blackPegs << endl;

    return 0;
}