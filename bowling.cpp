int calculateBowlingScore(string input) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < input.size() && frame < 10; i++) {
        if (input[i] == 'X') {
            score += 10;
            if (input[i + 1] == 'X') {
                score += 10;
                if (input[i + 2] == 'X') {
                    score += 10;
                } else if ('0' <= input[i + 2] && input[i + 2] <= '9') {
                    score += input[i + 2] - '0';
                }
            } else if (input[i + 2] == '/') {
                score += 10;
            } else if ('0' <= input[i + 1] && input[i + 1] <= '9' &&
                       '0' <= input[i + 2] && input[i + 2] <= '9') {
                score += input[i + 1] - '0' + input[i + 2] - '0';
            }
            frame++;
        } else if ('0' <= input[i] && input[i] <= '9') {
            score += input[i] - '0';
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
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