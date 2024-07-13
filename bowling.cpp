int score(string input) {
    int total_score = 0;
    int frame = 0;
    for (int i = 0; i < input.size() && frame < 10; i++) {
        if (input[i] == 'X') {
            total_score += 10;
            if (input[i + 2] == 'X') {
                total_score += 10 + (input[i + 4] == 'X' ? 10 : (input[i + 4] == '-' ? 0 : input[i + 4] - '0'));
            } else {
                total_score += (input[i + 2] == '/' ? 10 : (input[i + 2] == '-' ? 0 : input[i + 2] - '0'));
                total_score += (input[i + 4] == '/' ? 10 : (input[i + 4] == '-' ? 0 : input[i + 4] - '0'));
            }
            frame++;
            i += 2;
        } else if (input[i + 1] == '/') {
            total_score += 10;
            total_score += (input[i + 2] == 'X' ? 10 : (input[i + 2] == '-' ? 0 : input[i + 2] - '0'));
            frame++;
            i += 2;
        } else {
            total_score += (input[i] == '-' ? 0 : input[i] - '0');
            total_score += (input[i + 1] == '-' ? 0 : input[i + 1] - '0');
            i += 1;
            frame++;
        }
    }
    return total_score;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}