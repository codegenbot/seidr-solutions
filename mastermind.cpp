Here is the modified code:

```cpp
int mastermind(const string& code, const string& guess) {
    int black = 0;
    int white = 0;

    // Count correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code.substr(i, 1) == guess.substr(i, 1)) {
            black++;
        }
    }

    // Count correct colors (white pegs)
    int code_counts[6] = {false};
    for (int i = 0; i < 4; ++i) {
        if (!code_counts[code[i] - 'A']) {
            code_counts[code[i] - 'A'] = true;
            for (int j = 0; j < 4; ++j) {
                if (code[j] == guess[3-j] && !code_counts[code[j] - 'A']) {
                    white++;
                    code_counts[code[j] - 'A'] = true;
                    break;
                }
            }
        }
    }

    return black + white;
}