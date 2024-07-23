int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count black pegs first
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = '@';  // mark correct position as visited
            guess[i] = '#'; // mark correct position as visited
        }
    }

    // Count white pegs now
    for (int i = 0; i < 4; ++i) {
        if (code[i] != '@' && code[i] == guess[i]) {
            black++;
        } else {
            int index = guess.find(code[i]);
            while(index != std::string::npos) {
                white++;
                index = guess.find(code[i], index+1);
            }
        }
    }

    return black + white;
}