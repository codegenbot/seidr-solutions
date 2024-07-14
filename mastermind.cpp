int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    
    int codeCount[6] = {0};
    for(int i = 0; i < 4; ++i) {
        codeCount[code[i] - 'A']++;
    }
    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            --codeCount[code[i] - 'A'];
            ++blackPegs;
        } else if(codeCount[guess[i] - 'A'] > 0) {
            ++whitePegs;
            --codeCount[guess[i] - 'A'];
        }
    }
    
    return std::make_pair(blackPegs, whitePegs);
}