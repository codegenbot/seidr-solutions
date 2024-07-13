int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;

    // Count correct color and wrong place pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            // Correct placement peg
            count++;
        } else {
            codeMap[code[i]]++;
            codeMap[guess[i]]++;
        }
    }

    // Calculate actual black pegs by subtracting white pegs
    for (auto& pair : codeMap) {
        if (pair.second == 1 && code.find(pair.first) != string::npos) {
            count--;
        } else if (pair.second > 0) {
            count++;
        }
    }

    return count;
}