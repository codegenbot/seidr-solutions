std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    int white = 0; // Initialize white peg count to 0
    int black = 0; // Initialize black peg count to 0

    // Calculate white pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            white++;
        }
    }

    // Calculate black pegs
    std::vector<char> code_chars(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        int index = guess.find(guess[i]);
        if (index != std::string::npos && code[index] == guess[i]) {
            black++;
            code_chars[index] = '\0'; // Remove used character from vector
        }
    }

    return std::make_pair(4 - white, black);
}