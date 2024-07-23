int main() {
    string input;
    cin >> input;
    
    int score = 0, frame = 0, ball = 0;
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += (input[ball + 1] == 'X') ? 10 + ((input[ball + 2] == 'X') ? 10 : input[ball + 2] - '0') : (input[ball + 2] == '/' ? 10 : input[ball + 1] - '0' + input[ball + 2] - '0');
            }
            ball++;
            frame++;
        } else if (c == '/') {
            score += 10 - (input[ball - 1] - '0');
            score += (frame < 9) ? (input[ball + 1] == 'X' ? 10 : input[ball + 1] - '0') : 0;
            ball += 2;
            frame++;
        } else if (c == '-') {
            ball++;
        } else {
            score += c - '0';
            ball++;
            if (c == '7' && input[ball] == '/') {
                score += 10 - (c - '0');
            }
            frame++;
        }
        if (frame == 10) {
            break;
        }
    }
    
    cout << score << endl;
    
    return 0;
}