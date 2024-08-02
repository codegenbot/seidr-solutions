int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == '/') {
            if (input[i-1] - '0' == 10) {
                score += 10 + sum(input.substr(i+1));
            } else {
                score += input[i-1] - '0';
                score += max(input[i+1]-'0', 0);
            }
        } else if (input[i] == 'X') {
            score += 10;
            score += sum(input.substr(i+1));
        } else {
            int count = 0;
            while (i < 9 && input[i] != '/') i++;
            for (int j = i; j >= i-count; j--) {
                score += input[j]-'0';
                if (count == 10) break;
                if (input[j]-'0' < 5) count++;
            }
        }
    }
    return score;
}

int sum(string s) {
    int total = 0;
    for (char c : s) {
        total += c - '0';
    }
    return total;
}