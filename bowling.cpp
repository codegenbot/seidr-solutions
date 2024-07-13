int main() {
    string bowls;
    cin >> bowls;
    
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[ball + 1] == 'X') ? 10 + ((bowls[ball + 2] == 'X') ? 10 : bowls[ball + 2] - '0') : 10 + (bowls[ball + 1] == '/' ? 10 : bowls[ball + 1] - '0' + bowls[ball + 2] - '0');
            }
            ball++;
        } else if (c == '/') {
            score += 10 - (bowls[ball - 1] - '0');
            score += (bowls[ball + 1] == 'X') ? 10 : bowls[ball + 1] - '0';
            ball++;
        } else if (c == '-') {
            // do nothing
        } else {
            score += c - '0';
            if (frame < 10 && ball % 2 == 1 && bowls[ball - 1] == '/') {
                score += c - '0';
            }
        }
        ball++;
        if (ball % 2 == 0) {
            frame++;
        }
    }
    
    cout << score << endl;
    
    return 0;
}