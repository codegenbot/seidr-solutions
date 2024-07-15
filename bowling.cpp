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
                score += 10;
                ball = 0;
                frame++;
            }
        } else if (c == '/') {
            score += 10 - (bowls[ball - 1] - '0');
        } else if (c == '-') {
            // do nothing
        } else {
            score += c - '0';
            if (ball % 2 != 0) {
                ball++;
                frame++;
            } else {
                ball++;
            }
        }
    }
    
    cout << score << endl;
    
    return 0;
}