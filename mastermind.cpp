int masterMind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    // count occurrences of each color in the guess
    vector<int> guessCounts(6, 0);
    for (char c : guess) {
        guessCounts[c - 'A']++;
    }
    
    // count correct colors at wrong places and correct places
    int codeCounts[6] = {0};
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCounts[code[i] - 'A']++;
        }
    }
    
    // count correct colors at wrong places
    for (int i = 0; i < 6; ++i) {
        whitePegs += min(guessCounts[i], codeCounts[i]);
    }
    
    return make_pair(whitePegs, blackPegs).second;
}