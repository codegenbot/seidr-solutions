int getScore(string input) {
    int score = 0;
    int frame = 0;
    int i = 0;
    while (frame < 10) {
        if (input[i] == 'X') {
            score += 10;
            score += (input[i + 1] == 'X') ? 10 : (input[i + 1] == '/' ? 10 - (input[i + 2] - '0') : input[i + 1] - '0' + input[i + 2] - '0');
            i++;
        } else if (input[i + 1] == '/') {
            score += 10;
            score += (input[i + 2] == 'X') ? 10 : input[i + 2] - '0';
            i += 2;
        } else {
            score += (input[i] == '-' ? 0 : input[i] - '0');
            score += (input[i + 1] == '-' ? 0 : input[i + 1] - '0');
            i += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << getScore(input) << endl;
    return 0;
}