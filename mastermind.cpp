int numWhitePegs(const string& code, const string& guess) {
    int white = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            white++;
        }
    }
    return white;
}

int numBlackPegs(const string& code, const string& guess) {
    int black = 0;
    int codes[6] = {0}; // Counting the occurrences of each character in the code
    for (char c : code) {
        codes[c - 'A']++;
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            codes[guess[i] - 'A']--;
        } else if (codes[guess[i] - 'A'] > 0) {
            black++;
            codes[guess[i] - 'A']--;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        black += codes[i];
    }
    
    return black;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << numWhitePegs(code, guess) << endl;
    cout << numBlackPegs(code, guess) << endl;
    return 0;
}