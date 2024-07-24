int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0, whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }

    map<char, int> codeFreq, guessFreq;

    for (int i = 0; i < 4; ++i) {
        ++codeFreq[code[i]];
        ++guessFreq[guess[i]];
    }

    for (auto &c : codeFreq) {
        if (guessFreq.find(c.first) != guessFreq.end()) {
            whitePegs += min(c.second, guessFreq[c.first]);
        }
    }

    whitePegs -= blackPegs;

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}