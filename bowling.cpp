int score(string input) {
    int frame = 1;
    int totalScore = 0;
    int i = 0;
    while (frame <= 10) {
        if (input[i] == 'X') {
            totalScore += 10;
            totalScore += (input[i + 2] == 'X') ? 10 : (input[i + 2] == '/') ? 10 - (input[i + 1] - '0') : input[i + 1] + input[i + 2] - 2 * '0';
            i++;
        } else if (input[i + 1] == '/') {
            totalScore += 10;
            totalScore += (input[i + 2] == 'X') ? 10 : input[i + 2] - '0';
            i += 2;
        } else {
            totalScore += input[i] + input[i + 1] - 2 * '0';
            i += 2;
        }
        frame++;
    }
    return totalScore;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}