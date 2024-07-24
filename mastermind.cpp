int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    map<char, int> code_count;
    map<char, int> guess_count;

    // Count occurrences of each character in the code and guess
    for (char c : code) {
        code_count[c]++;
    }
    for (char c : guess) {
        guess_count[c]++;
    }

    // Count white pegs (correct color, wrong place)
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (code_count[guess[i]] > 0) {
            code_count[guess[i]]--;
            white++;
        }
    }

    // Count remaining characters in the code that are not in the guess
    for (auto& pair : code_count) {
        while (pair.second > 0 && !contains(guess, pair.first)) {
            pair.second--;
        }
    }

    return black * 4 + white;
}

bool contains(string s, char c) {
    for (char ch : s) {
        if (ch == c) {
            return true;
        }
    }
    return false;
}