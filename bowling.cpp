int score(string input) {
    int totalScore = 0;
    int frame = 0;
    for (int i = 0; i < input.size() && frame < 10; ++i) {
        if (input[i] == 'X') {
            totalScore += 10;
            if (input[i + 2] == '/') {
                totalScore += 10;
            } else {
                if (input[i + 1] == 'X') {
                    totalScore += 10;
                } else {
                    totalScore += input[i + 1] - '0';
                }
                if (input[i + 2] == 'X') {
                    totalScore += 10;
                } else if (input[i + 2] == '/') {
                    totalScore += 10 - (input[i + 1] - '0');
                } else {
                    totalScore += input[i + 2] - '0';
                }
            }
            frame++;
        } else if (input[i] == '/') {
            totalScore += 10 - (input[i - 1] - '0');
            totalScore += input[i + 1] - '0';
            frame++;
        } else if (input[i] == '-') {
            // do nothing
        } else {
            totalScore += input[i] - '0';
            frame++;
        }
    }
    return totalScore;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}