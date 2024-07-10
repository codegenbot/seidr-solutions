int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> codeMap;
    map<char, int> guessMap;
    
    for(int i = 0; i < 4; i++) {
        codeMap[code[i]]++;
        guessMap[guess[i]]++;
    }

    for(auto x: codeMap) {
        if(x.second > 0 && guessMap.count(x.first) > 0) {
            white += min(x.second, guessMap[x.first]);
        }
    }

    return black + (4 - black);
}