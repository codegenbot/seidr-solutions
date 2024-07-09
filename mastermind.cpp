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
    map<char, int> codeMap, guessMap;
    for (int i = 0; i < 4; ++i) {
        codeMap[code[i]]++;
        guessMap[guess[i]]++;
    }
    for (auto it : codeMap) {
        if (it.second > 0 && guessMap.count(it.first)) {
            count += min(it.second, guessMap[it.first]);
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << '\n';
    cout << blackPegs(code, guess) << '\n';
    return 0;
}