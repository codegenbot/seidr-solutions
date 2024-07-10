int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount, guessCount;
    
    for (char c : code) {
        codeCount[c]++;
    }
    
    for (char c : guess) {
        guessCount[c]++;
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            codeCount[code[i]]--;
            guessCount[guess[i]]--;
        } else {
            if (codeCount[guess[i]] > 0 && guessCount[guess[i]] > 0) {
                count++;
                codeCount[guess[i]]--;
                guessCount[guess[i]]--;
            }
        }
    }
    
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << endl;
    cout << whitePegs(code, guess) << endl;
}