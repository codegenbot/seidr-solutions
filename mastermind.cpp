int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count - 1; // subtract the number of correct colors in both strings
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
    for (auto& codePair : codeMap) {
        for (auto& guessPair : guessMap) {
            if (codePair.second == 1 && guessPair.second == 1) {
                count++;
            }
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