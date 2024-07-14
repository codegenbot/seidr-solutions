int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Counting the number of white pegs
    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for (int i = 0; i < 4; ++i) {
        if (codeArray[i] == guessArray[i]) {
            blackPegs++;
            codeArray[i] = '\0';
            guessArray[i] = '\0';
        }
    }

    // Counting the number of black pegs
    for (int i = 0; i < 4; ++i) {
        if (!contains(codeArray, guessArray[i])) {
            continue;
        }
        --codeArray[find(codeArray.begin(), codeArray.end(), guessArray[i]) - codeArray.begin()];
        blackPegs++;
    }

    return make_pair(4 - blackPegs, blackPegs).first;
}

bool contains(const vector<char>& v, char x) {
    for (char c : v) {
        if (c == x) {
            return true;
        }
    }
    return false;
}

int find(const vector<char>& v, char x) {
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == x) {
            return i;
        }
    }
}