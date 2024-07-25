int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int whitePegs(string code, string guess) {
    int count = 0;
    map<char, int> codeFreq;
    map<char, int> guessFreq;
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeFreq[code[i]]++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }
    
    for (auto &[color, freq] : codeFreq) {
        count += min(freq, guessFreq[color]);
    }
    
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = blackPegs(code, guess);
    int white = whitePegs(code, guess) - black;
    
    cout << white << endl << black << endl;
    
    return 0;
}