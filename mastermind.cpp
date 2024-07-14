int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for(int i=0; i<6; i++) { // for each possible character
        int countCode = 0, countGuess = 0;
        for(int j=0; j<4; j++) {
            if(code[j] == (char)i+'A') {
                countCode++;
            }
            if(guess[j] == (char)i+'A') {
                countGuess++;
            }
        }
        whitePegs += min(countCode, countGuess); // the minimum of how many times this character appears in code and guess
    }

    return 4 - countBlackPegs(code, guess) + whitePegs;
}

int main() {
    string code, guess;
    cout << "Enter Mastermind code (RRRR): ";
    cin >> code;
    cout << "Enter a guess (RRRR): ";
    cin >> guess;
    cout << countWhitePegs(code, guess) << endl; // number of white pegs
    cout << countBlackPegs(code, guess) << endl;  // number of black pegs
    return 0;
}