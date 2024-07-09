int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    // Count occurrences of each color in the code string
    std::map<char, int> code_count;
    for (char c : code) {
        code_count[c]++;
    }

    // Iterate through the characters in both strings
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++; // Correct color, correct place - black peg
        } else {
            int count = code_count[guess[i]];
            if (count > 0) {
                white++;
                code_count[guess[i]]--; // Decrement the count
            }
        }
    }

    // Check for remaining counts in the code string that were not correctly placed
    for (auto& pair : code_count) {
        while(pair.second > 0) {
            white++;
            pair.second--;
        }
    }

    return black + white;
}