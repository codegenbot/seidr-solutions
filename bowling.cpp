int bowlingScore(string input) {
    int score = 0;
    for (char c : input) {
        if (c == '/') {
            continue;
        }
        int count = 0;
        while (c != '/' && c >= '0' && c <= '9') {
            count *= 10;
            count += c - '0';
            c = nextChar(input, c);
        }
        score += count;
    }
    return score;
}

char nextChar(string input, char c) {
    for (int i = input.find(c); i < input.length(); i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            return input[i];
        }
    }
    return ' ';
}