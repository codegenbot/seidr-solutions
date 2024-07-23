int getWhitePegs(string code, string guess) {
    int whitePegs = 0;
    map<char, int> codeCount;
    map<char, int> guessCount;

    // Count the occurrences of each character in both strings
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        guessCount[c]++;
    }

    // Compare the counts and count the white pegs
    for (auto it = guessCount.begin(); it != guessCount.end(); ++it) {
        if (codeCount.find(it->first) != codeCount.end() && codeCount[it->first] > 0) {
            whitePegs += min(codeCount[it->first], it->second);
        }
    }

    return whitePegs;
}

int getBlackPegs(string code, string guess) {
    int blackPegs = 0;
    map<char, int> codeIndex;

    // Create a mapping of the characters in the code to their indices
    for (int i = 0; i < code.length(); i++) {
        codeIndex[code[i]] = i;
    }

    // Compare the code and guess character by character
    for (int i = 0; i < code.length(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    return blackPegs;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter a guess: ";
    cin >> guess;

    int whitePegs = getWhitePegs(code, guess);
    int blackPegs = getBlackPegs(code, guess);

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}