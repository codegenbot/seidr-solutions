int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count the number of black pegs (correct color and correct place)
    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            ++blackPegs;
            code[i] = 'X'; // mark the peg as found
            guess[i] = 'Y'; // mark the peg as found in guess
        }
    }

    // Count the number of white pegs (correct color, wrong place)
    for(int i = 0; i < 4; ++i) {
        if(code.find(guess[i]) != string::npos) {
            --code.erase(code.find(guess[i])).size();
            ++whitePegs;
        }
    }

    return blackPegs << 2 | whitePegs;
}