int score(string input) {
    int total = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10) {
        if (input[i] == 'X') {
            total += 10;
            total += (input[i + 2] == 'X') ? 10 : (input[i + 2] == '/' ? 10 - (input[i + 1] - '0') : input[i + 1] - '0' + input[i + 2] - '0');
            i += 2;
        } else if (input[i + 1] == '/') {
            total += 10;
            total += (input[i + 2] == 'X') ? 10 : input[i + 2] - '0';
            i += 3;
        } else {
            total += (input[i] == '-' ? 0 : input[i] - '0') + (input[i + 1] == '-' ? 0 : input[i + 1] - '0');
            i += 2;
        }
        frame++;
    }
    return total;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}