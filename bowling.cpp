int calculateBowlingScore(string input) {
    int score = 0;
    int frame = 1;
    int i = 0;
    while (i < input.size() && frame <= 10) {
        if (input[i] == 'X') {
            score += 10;
            if (i + 2 < input.size()) {
                if (input[i + 2] == 'X') {
                    score += 10;
                } else if (input[i + 2] == '/') {
                    score += 10 - (input[i + 1] - '0');
                } else {
                    score += input[i + 1] - '0' + input[i + 2] - '0';
                }
            }
            i += 1;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
            if (i + 1 < input.size()) {
                score += input[i + 1] - '0';
            }
        } else if (input[i] >= '0' && input[i] <= '9') {
            score += input[i] - '0';
        }
        i += 1;
        if (input[i - 1] == 'X' || input[i - 1] == '/') {
            frame += 1;
        }
    }
    return score;
}
int main() {
    string input;
    cin >> input;
    cout << calculateBowlingScore(input) << endl;
    return 0;
}