int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Calculate white pegs (correct color, wrong place)
    map<char, int> codeCount, guessCount;
    for(int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    for(auto & p : codeCount) {
        white += min(p.second, guessCount[p.first]);
    }

    // Calculate black pegs (correct color, correct place)
    int correct = 0;
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            codeCount[code[i]]--;
            guessCount[guess[i]]--;
            correct++;
        }
    }
    black = correct;

    return make_pair(white, black).second;
}