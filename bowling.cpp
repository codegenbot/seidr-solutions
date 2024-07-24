int score(const string& input) {
    int total = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10 && i < input.size()) {
        if (input[i] == 'X') {
            total += 10;
            total += (input[i + 2] == 'X') ? 10 : (isdigit(input[i + 2]) ? input[i + 2] - '0' : 10);
            total += (input[i + 4] == 'X') ? 10 : (isdigit(input[i + 4]) ? input[i + 4] - '0' : 10);
            i += 2;
        } else if (input[i + 1] == '/') {
            total += 10;
            total += (input[i + 2] == 'X') ? 10 : (isdigit(input[i + 2]) ? input[i + 2] - '0' : 10);
            i += 3;
        } else {
            total += (isdigit(input[i]) ? input[i] - '0' : 0);
            total += (isdigit(input[i + 1]) ? input[i + 1] - '0' : 0);
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