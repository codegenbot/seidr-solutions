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
    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (codeArray[i] == guessArray[i]) {
            codeArray[i] = 'x';
            guessArray[i] = 'x';
        }
    }

    for (int i = 0; i < 4; i++) {
        if (find(codeArray.begin(), codeArray.end(), guessArray[i]) != codeArray.end()) {
            count++;
            codeArray.erase(remove(codeArray.begin(), codeArray.end(), guessArray[i]), codeArray.end());
        }
    }

    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}