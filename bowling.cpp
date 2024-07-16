int score(string input) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < input.size() && frame < 10; ++i) {
        if (input[i] == 'X') {
            total += 10;
            if (input[i + 1] == 'X') {
                total += 10;
                if (input[i + 2] == 'X') {
                    total += 10;
                } else if (input[i + 2] == '/') {
                    total += 10 - (input[i + 1] - '0');
                } else {
                    total += input[i + 2] - '0';
                }
            } else {
                if (input[i + 2] == '/') {
                    total += 10;
                } else {
                    total += input[i + 1] - '0' + input[i + 2] - '0';
                }
            }
            frame++;
        } else if (input[i] == '/') {
            total += 10 - (input[i - 1] - '0');
        } else {
            total += input[i] - '0';
            if (input[i + 1] == '/') {
                total += 10 - (input[i] - '0');
            }
            frame++;
        }
    }
    return total;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}