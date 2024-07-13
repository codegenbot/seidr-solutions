int main() {
    string input;
    cin >> input;
    int score = 0, frame = 0, ball = 0;
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += (input[ball + 1] == 'X' ? 10 : (isdigit(input[ball + 1]) ? input[ball + 1] - '0' : 10));
                score += (input[ball + 2] == 'X' ? 10 : (input[ball + 2] == '/' ? 10 - (input[ball + 1] - '0') : (isdigit(input[ball + 2]) ? input[ball + 2] - '0' : 10)));
            }
            ball++;
        } else if (c == '/') {
            score += 10 - (input[ball - 1] - '0');
            score += (input[ball + 1] == 'X' ? 10 : (isdigit(input[ball + 1]) ? input[ball + 1] - '0' : 10));
            ball += 2;
        } else if (isdigit(c)) {
            score += c - '0';
            ball++;
        }
        if (c == 'X' || ball % 2 == 0) {
            frame++;
        }
        if (frame == 10) {
            break;
        }
    }
    cout << score << endl;
    return 0;
}