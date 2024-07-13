int whitePegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            // Check if the color is already counted
            if (!codeMap.count(code[i])) {
                count++;
                codeMap[code[i]] = 1;
            }
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = whitePegs(code, guess); // Use the corrected whitePegs
    map<char, int> codeCount(0), guessCount(0);
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++; // Correct position, increment black pegs
        } else {
            codeCount[code[i]]++;
            guessCount[guess[i]]++;
        }
    }
    for (auto& pair : codeCount) {
        if (pair.second > 0 && codeMap.count(pair.first)) {
            count--; // Subtract white pegs
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}