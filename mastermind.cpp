int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int whitePegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;
    map<char, int> guessMap;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            codeMap[code[i]]++;
        } else {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }
    
    for (auto it = guessMap.begin(); it != guessMap.end(); ++it) {
        if (codeMap.find(it->first) != codeMap.end()) {
            count += min(it->second, codeMap[it->first]);
        }
    }
    
    return count - blackPegs(code, guess);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    
    return 0;
}