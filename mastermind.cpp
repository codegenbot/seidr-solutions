int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int white = whitePegs(code, guess);
    int count = 0;
    vector<vector<int>> counts(6, vector<int>(4));
    
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) continue;
        for (int j = 0; j < 4; j++) {
            if (code[j] == guess[i]) {
                counts[code.find(guess[i])][j]++;
                if (j < white) {
                    counts[code.find(guess[i])][j]--;
                }
            }
        }
    }
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            count += min(counts[i][j], 1);
        }
    }
    return 4 - white + count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int black = blackPegs(code, guess);
    cout << black << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}