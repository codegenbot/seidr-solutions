#include <vector>
#include <iostream>
#include <string>

using namespace std;

int getBlackPegs(const string& code, const string& guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    return blackPegs;
}

int getWhitePegs(const string& code, const string& guess) {
    int whitePegs = 0;
    vector<char> codeChar(6);
    for (int i = 0; i < 4; ++i) {
        codeChar[code[i]]++;
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            --codeChar[guess[i]];
        } else {
            codeChar[guess[i]]--;
        }
    }
    for (char c = 'A'; c <= 'F'; ++c) {
        whitePegs += min(codeChar[c], 0);
    }
    return whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << getWhitePegs(code, guess) << endl;
    cout << getBlackPegs(code, guess) << endl;
    return 0;
}