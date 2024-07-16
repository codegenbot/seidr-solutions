int bowlingScore(string input) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    for (int i = 0; i < input.length(); i++) {
        if (frame > 10) break;
        if (input[i] == 'X') {
            score += 10;
            if (frame < 10) {
                if (input[i + 2] == 'X') {
                    score += 10;
                } else {
                    score += (input[i + 1] == 'X' ? 10 : input[i + 1] - '0') + (input[i + 2] == '/' ? 10 - (input[i + 1] == 'X' ? 10 : input[i + 1] - '0') : input[i + 2] - '0');
                }
            }
            bowlIndex++;
            frame++;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] == 'X' ? 10 : input[i - 1] - '0');
        } else if (input[i] == '-') {
            // do nothing
        } else {
            score += input[i] - '0';
            if (input[i + 1] == '/') {
                score += 10 - (input[i] - '0');
            }
            bowlIndex++;
            if (bowlIndex % 2 == 0) {
                frame++;
            }
        }
    }
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << bowlingScore(input) << endl;
    return 0;
}