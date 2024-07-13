int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    // count the correct colors but wrong position
    int codeOnly = 0, guessOnly = 0;
    map<char, bool> codeMap;
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            codeMap[code[i]] = true;
            guessOnly++;
        }
    }
    count -= codeOnly + guessOnly;
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap, guessMap;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        } else {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }
    // count the correct colors and positions
    for (auto& pair : codeMap) {
        if (pair.second == 1 && guessMap.count(pair.first)) {
            count++;
        }
    }
    return count;
}