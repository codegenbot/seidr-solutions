```cpp
int mastermind(const char* code, const char* guess) {
    unordered_map<char, int> codeMap;
    for (int i = 0; i < 4; ++i) {
        codeMap[code[i]]++;
    }

    int black = 0;
    int white = 0;

    // Count correct characters that are in the same position (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct characters that are not in the same position (white pegs)
    for (int i = 0; i < 4; ) {
        int foundInCode = codeMap[guess[i]] > 0;
        if (foundInCode && guess[i] != code[i]) {
            white++;
        }
        codeMap[guess[i]]--;
        i++; // increment 'i' to avoid infinite loop
    }

    return black + white;
}