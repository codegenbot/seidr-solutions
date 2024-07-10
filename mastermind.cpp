int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i]) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeFreq, guessFreq;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }
    int black = 0;
    for (auto& it : codeFreq) {
        black += min(it.second, guessFreq[it.first]);
    }
    return black;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}