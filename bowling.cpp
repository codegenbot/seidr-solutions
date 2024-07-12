int main() {
    string input;
    cin >> input;

    int score = 0;
    int frame = 0;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 'X') {
            score += 10 + (input[i + 1] == 'X' ? 10 : (input[i + 2] == '/' ? 10 : (input[i + 2] - '0')));
            frame++;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0') + (input[i + 1] == 'X' ? 10 : (input[i + 1] - '0'));
            frame++;
        } else if (input[i] == '-') {
            score += 0;
            frame++;
        } else {
            score += input[i] - '0';
            if ((input[i] - '0' + (input[i + 1] - '0')) == 10) {
                score += input[i + 1] - '0';
            }
            i++;
            frame++;
        }
        if (frame == 10) break;
    }

    cout << score << endl;
    
    return 0;
}