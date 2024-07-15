int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < code.size(); ++i) {
        if (code[i] != guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount, guessCount;
    for (int i = 0; i < code.size(); ++i) {
        if (code[i] == guess[i]) {
            count++;
        } else {
            codeCount[code[i]]++;
            guessCount[guess[i]]++;
        }
    }
    for (auto& pair : codeCount) {
        count += min(pair.second, guessCount[pair.first]);
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