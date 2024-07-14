int main() {
    string code, guess;
    cin >> code >> guess;

    int blackPegs = 0;
    int whitePegs = 0;

    map<char, int> codeCount, guessCount;

    // Count the characters in the code and guess
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        guessCount[c]++;
    }

    // Count the black pegs (correct color, correct place)
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeCount[code[i]]--;
            guessCount[guess[i]]--;
            blackPegs++;
        }
    }

    // Count the white pegs (correct color, wrong place)
    for (char c : code) {
        if (guessCount[c] > 0) {
            whitePegs++;
            guessCount[c]--;
        }
    }

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}