int calculateScore(string input) {
    int score = 0;
    int frame = 1;
    int throwIndex = 0;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (input[i + 1] == 'X' ? 10 : (input[i + 1] == '/' ? 10 - (input[i + 2] - '0') : input[i + 1] - '0') + (input[i + 2] == '/' ? 10 - (input[i + 3] - '0') : input[i + 2] == 'X' ? 10 : input[i + 2] - '0'));
            }
            frame++;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
            score += (input[i + 1] == 'X' ? 10 : input[i + 1] - '0');
            if (frame < 10) {
                throwIndex++;
                score += (input[i + 1] == 'X' ? 10 : (input[i + 1] == '/' ? 10 - (input[i + 2] - '0') : input[i + 1] - '0'));
            }
            frame++;
        } else if (input[i] != '-') {
            score += input[i] - '0';
            if (frame < 10) {
                throwIndex++;
            }
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateScore(input) << endl;

    return 0;
}