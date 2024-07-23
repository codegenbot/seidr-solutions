int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap, guessMap;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        } else {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }
    
    for (auto it = codeMap.begin(); it != codeMap.end(); ++it) {
        count += min(it->second, guessMap[it->first]);
    }
    
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    
    return 0;
}