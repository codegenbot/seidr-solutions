int scoreBowlingRound(string input) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            score += 10;
            if (frame < 9) {
                score += (input[i + 2] == 'X') ? 10 : (input[i + 2] - '0');
                score += (input[i + 3] == 'X') ? 10 : (input[i + 3] - '0');
            }
            frame++;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
            score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
            frame++;
        } else if (input[i] == '-') {
            // do nothing for miss
        } else {
            score += input[i] - '0';
            if (input[i + 1] == '/') {
                score += 10 - (input[i] - '0');
                frame++;
            }
        }
    }
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << scoreBowlingRound(input) << endl;
    return 0;
}