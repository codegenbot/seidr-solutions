```cpp
int numBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int numWhitePegs(string code, string guess) {
    int whitePegs = 0;
    map<char, int> codeCount, guessCount;
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    for (int i = 0; i < 6; ++i) {
        if (codeCount[char('A' + i)] > 0 && guessCount[char('A' + i)] > 0) {
            whitePegs += min(codeCount[char('A' + i)], guessCount[char('A' + i)]);
        }
    }
    return whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << numWhitePegs(code, guess) << endl;
    cout << numBlackPegs(code, guess) << endl;
    return 0;
}