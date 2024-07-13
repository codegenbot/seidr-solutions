int numWhitePegs(string code, string guess) {
    int whitePegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++whitePegs;
            code[i] = 'X';
            guess[i] = 'X';
        }
    }
    return whitePegs;
}

int numBlackPegs(string code, string guess) {
    int blackPegs = 0;
    vector<char> codeCount(6, 0);
    vector<char> guessCount(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++codeCount[code[i] - 'A'];
            ++guessCount[guess[i] - 'A'];
        } else {
            ++codeCount[guess[i] - 'A'];
            ++guessCount[code[i] - 'A'];
        }
    }

    for (int i = 0; i < 6; ++i) {
        blackPegs += min(codeCount[i], guessCount[i]);
    }

    return blackPegs;
}

int main() {
    string code, guess;
    cout << "Enter Mastermind code: ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;

    int whitePegs = numWhitePegs(code, guess);
    int blackPegs = numBlackPegs(code, guess);

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}