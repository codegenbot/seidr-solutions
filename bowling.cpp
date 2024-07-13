int score(string input) {
    int frame = 0;
    int score = 0;
    for (int i = 0; i < input.size(); ++i) {
        if (frame == 10) break;
        if (input[i] == 'X') {
            score += 10;
            if (input[i+2] == 'X') score += 10;
            else if (input[i+2] == '/') score += 10 - (input[i+1] - '0');
            else score += input[i+1] - '0' + input[i+2] - '0';
            frame++;
        } else if (input[i] == '/') {
            score += 10 - (input[i-1] - '0');
        } else if (input[i] == '-') {
            // do nothing
        } else {
            score += input[i] - '0';
            if (input[i+1] == '/') score += 10 - (input[i] - '0');
            frame++;
        }
    }
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}