int whitePegs(string code, string guess) {
    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;
    for(int i = 0; i < 4; i++) {
        codeMap[code[i]]++;
    }
    
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            codeMap[code[i]]--;
        } else if(codeMap.find(guess[i]) != codeMap.end()) {
            codeMap[guess[i]]--;
            count++;
        }
    }
    
    for(auto it = codeMap.begin(); it != codeMap.end(); it++) {
        if(it->second > 0) {
            count += it->second;
        }
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