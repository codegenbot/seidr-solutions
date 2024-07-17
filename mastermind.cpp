int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    return blackPegs;
}

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    map<char, int> codeCount, guessCount;
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        guessCount[c]++;
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            continue;
        }
        if (guessCount[guess[i]] > codeCount[code[i]]) {
            ++whitePegs;
        }
    }
    return whitePegs - countBlackPegs(code, guess);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << countWhitePegs(code, guess) << '\n';
    cout << countBlackPegs(code, guess) << '\n';
    return 0;
}