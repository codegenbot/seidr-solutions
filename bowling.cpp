int score(string input) {
    int total_score = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10 && i < input.size()) {
        if (input[i] == 'X') {
            total_score += 10;
            total_score += (input[i + 2] == 'X') ? 10 : (input[i + 2] == '/' ? 10 - (input[i + 1] - '0') : input[i + 1] - '0' + input[i + 2] - '0');
            i++;
        } else if (input[i + 1] == '/') {
            total_score += 10;
            total_score += (input[i + 2] == 'X') ? 10 : input[i + 2] - '0';
            i += 2;
        } else {
            total_score += (input[i] == '-' ? 0 : input[i] - '0') + (input[i + 1] == '-' ? 0 : input[i + 1] - '0');
            i += 2;
        }
        frame++;
    }
    return total_score;
}
int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}