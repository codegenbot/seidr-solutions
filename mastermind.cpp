int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount, guessCount;

    for (int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }

    for (auto it = codeCount.begin(); it != codeCount.end(); it++) {
        if (it->second > 0 && guessCount[it->first] > 0) {
            count += min(it->second, guessCount[it->first]);
        }
    }

    return 4 - count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int black = blackPegs(code, guess);
    int white = 4 - black;
    cout << white << endl << black << endl;
    return 0;
}