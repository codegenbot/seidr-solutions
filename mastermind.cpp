int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places (white pegs)
    for(int i=0; i<4; i++) {
        int count = std::count(guess.begin(), guess.end(), code[i]);
        if(count < 4 && count > 0) {
            white++;
        }
    }

    // Count the number of correct colors in correct places (black pegs)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code.erase(i, 1);
            guess.erase(guess.begin()+i, 1);
            i--;
        }
    }

    return white + black;
}