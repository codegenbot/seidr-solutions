int whitePegs(string code, string guess) {
    int white = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            white++;
        }
    }
    return white;
}

int blackPegs(string code, string guess) {
    int black = 0;
    map<char, int> codeCount, guessCount;
    
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    
    for (auto it : codeCount) {
        if (it.second > 0 && guessCount.find(it.first) != guessCount.end() &&
            it.second == guessCount[it.first]) {
            black += it.second;
        } else {
            black += min(it.second, guessCount[it.first]);
        }
    }
    
    return black - white;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    cout << white << endl;
    cout << black << endl;
    return 0;
}