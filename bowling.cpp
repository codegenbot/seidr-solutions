int main() {
    string input;
    cin >> input;
    int score = 0;
    int frame = 1;
    int bowl = 0;
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (input[bowl + 1] == 'X') ? 10 : (isdigit(input[bowl + 1]) ? input[bowl + 1] - '0' : 10);
                score += (input[bowl + 2] == 'X') ? 10 : (input[bowl + 2] == '/' ? 10 - (input[bowl + 1] - '0') : (isdigit(input[bowl + 2]) ? input[bowl + 2] - '0' : 10));
            }
            bowl++;
        } else if (c == '/') {
            score += 10 - (input[bowl - 1] - '0');
            score += (isdigit(input[bowl + 1]) ? input[bowl + 1] - '0' : 10);
            if (frame == 10) break;
        } else if (isdigit(c)) {
            score += c - '0';
            if (frame < 10 && (c - '0' + (input[bowl - 1] - '0') == 10))
                score += (input[bowl + 1] == '/') ? 10 - (c - '0') : (isdigit(input[bowl + 1]) ? input[bowl + 1] - '0' : 0);
        }
        if (c == 'X' || c == '/') frame++;
        if (c != 'X') bowl++;
    }
    cout << score << endl;
    return 0;
}