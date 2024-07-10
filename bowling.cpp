int bowlingScore(string input) {
    int score = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10 && i < input.size()) {
        if (input[i] == 'X') {
            score += 10;
            score += (input[i + 1] == 'X') ? 10 : (input[i + 1] == '/') ? 10 - (input[i + 2] - '0') : input[i + 1] - '0' + input[i + 2] - '0';
            i++;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
            score += (input[i + 1] == 'X') ? 10 : input[i + 1] - '0';
        } else {
            score += input[i] - '0';
        }
        i++;
        if (input[i - 1] == 'X' || input[i - 1] == '/') {
            frame++;
        }
    }
    return score;
}

int main() {
    string input;
    getline(cin, input);
    cout << bowlingScore(input) << endl;
    return 0;
}