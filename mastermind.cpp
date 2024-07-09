int numBlackPegs(string code, string guess) {
    int black = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }
    return black;
}

int numWhitePegs(string code, string guess) {
    int white = 0;
    vector<char> c(6);
    for (char ch : code) {
        c[ch - 'A']++;
    }
    for (int i = 0; i < 4; i++) {
        bool isWhite = false;
        for (int j = 0; j < 6; j++) {
            if (c[j] > 0 && code.find((char)(j + 'A')) != string::npos) {
                c[j]--;
                isWhite = true;
                break;
            }
        }
        if (!isWhite) {
            for (int j = 0; j < 6; j++) {
                if (c[j] > 0 && guess.find((char)(j + 'A')) != string::npos) {
                    c[j]--;
                    isWhite = true;
                    break;
                }
            }
        }
        white += isWhite;
    }
    return white - numBlackPegs(code, guess);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << numWhitePegs(code, guess) << endl;
    cout << numBlackPegs(code, guess) << endl;
    return 0;
}