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
    map<char, int> codeMap;
    map<char, int> guessMap;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        } else {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }

    int total = 0;
    for (auto it : codeMap) {
        total += min(it.second, guessMap[it.first]);
    }

    return count + total;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << "\n" << blackPegs(code, guess);
    return 0;
}