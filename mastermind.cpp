int numWhitePegs(string &code, string &guess) {
    int whitePegs = 0;
    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int numBlackPegs(string &code, string &guess) {
    int blackPegs = 0;
    vector<int> codeCount(6, 0);
    for(int i = 0; i < 4; ++i) {
        codeCount[code[i] - 'A']++;
    }
    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            blackPegs++;
            codeCount[guess[i] - 'A']--;
        } else {
            for(int j = 0; j < 6; ++j) {
                if(codeCount[j] > 0 && code.find(std::string(1, 'A' + j)) == string::npos) {
                    blackPegs++;
                    codeCount[j]--;
                    break;
                }
            }
        }
    }
    return blackPegs;
}

int main() {
    // Read the input
    string code, guess;
    cin >> code >> guess;

    int white = numWhitePegs(code, guess);
    int black = numBlackPegs(code, guess);

    cout << black << endl;
    cout << white << endl;

    return 0;
}