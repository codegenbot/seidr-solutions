int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Counting black pegs (correct color, correct place)
    for(int i = 0; i < 4; ++i){
        if(code[i] == guess[i]){
            black++;
        }
    }

    // Counting white pegs (correct color, wrong place)
    for(int i = 0; i < 6; ++i){ // For each possible character
        int count = 0;
        for(int j = 0; j < 4; ++j){ // For each position in the code and guess
            if(code[j] == (char)(i+97) && guess[j] == (char)(i+97)) { // If both are equal to the character
                count++;
            }
        }
        white += min(count, black); // Subtracting the correct ones that were already counted as black pegs
    }

    return black + white - 4; // Subtracting the four correct and correct positions already counted
}