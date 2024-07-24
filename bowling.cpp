int main() {
    string input;
    cin >> input;

    int score = 0;
    int frame = 1;
    int i = 0;

    while (frame <= 10) {
        if (input[i] == 'X') {
            score += 10;
            if (input[i + 1] == 'X') {
                score += 10;
                if (input[i + 2] == 'X') {
                    score += 10;
                } else {
                    score += input[i + 2] - '0';
                }
                i++;
            } else {
                if (input[i + 2] == '/') {
                    score += 10;
                } else {
                    score += input[i + 1] - '0' + input[i + 2] - '0';
                }
                i += 2;
            }
        } else if (input[i + 1] == '/') {
            score += 10;
            score += input[i + 2] - '0';
            i += 2;
        } else {
            score += input[i] - '0' + input[i + 1] - '0';
            i += 2;
        }

        frame++;
    }

    cout << score << endl;

    return 0;
}