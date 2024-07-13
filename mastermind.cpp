#include <vector>
#include <iostream>
#include <string>

int countBlackPegs(const string& code, const string& guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int countWhitePegs(const string& code, const string& guess) {
    int whitePegs = 0;
    vector<char> codeSet(6);
    for (int i = 0; i < 4; ++i) {
        codeSet[code[i]]++;
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            continue;
        }
        if (codeSet[guess[i]] > 0) {
            whitePegs++;
            codeSet[guess[i]]--;
        }
    }
    
    return whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << countWhitePegs(code, guess) << endl;
    cout << countBlackPegs(code, guess) << endl;
    return 0;
}