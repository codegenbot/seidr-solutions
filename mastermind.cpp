int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    // Count the number of black pegs (correct color and correct place)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of white pegs (correct color, wrong place)
    int code_counts[6] = {0}; 
    for (char c : code) {
        code_counts[c - 'a']++; 
    } 

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            continue;
        }
        else {
            white += code_counts[guess[i] - 'a']; 
            code_counts[guess[i] - 'a']--; 
        }
    }

    // subtract black pegs from the total count to get only white pegs
    white -= black;

    return black + white;
}