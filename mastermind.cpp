int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    map<char, int> codeFreq;
    map<char, int> guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            whitePegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }
    
    int blackPegs = 0;
    for (auto& it : codeFreq) {
        blackPegs += min(it.second, guessFreq[it.first]);
    }
    
    return whitePegs;
}

int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        blackPegs += (code[i] == guess[i]) ? 1 : 0;
    }
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    cout << countWhitePegs(code, guess) << endl;
    cout << countBlackPegs(code, guess) << endl;
    
    return 0;
}