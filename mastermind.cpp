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
    int white = whitePegs(code, guess);
    int black = 0;
    map<char, int> codeMap, guessMap;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            codeMap[code[i]]--;
            guessMap[guess[i]]--;
        } else {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }
    for (auto& pair : codeMap) {
        if (pair.second > 0) {
            black++;
        }
    }
    return black - white;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;