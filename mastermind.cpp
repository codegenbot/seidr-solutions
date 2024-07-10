int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            break;
        }
    }

    // Count remaining correct colors in wrong places
    int code_count[6] = {0};
    int guess_count[6] = {0};
    for (int i = 0; i < 4; ++i) {
        code_count[code[i] - 'A']++;
        guess_count[guess[i] - 'A']++;
    }
    for (int i = 0; i < 6; ++i) {
        white += min(code_count[i], guess_count[i]);
    }

    return black + white;
}