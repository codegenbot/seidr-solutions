int main() {
    string bowls;
    cin >> bowls;
    int score = 0;
    int frame = 0;
    int balls = 0;
    for (char c: bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += ((bowls[balls + 1] == 'X') ? 10 : (isdigit(bowls[balls + 1]) ? bowls[balls + 1] - '0' : 0)) +
                         ((bowls[balls + 2] == 'X') ? 10 : (bowls[balls + 2] == '/' ? 10 - (isdigit(bowls[balls + 1]) ? bowls[balls + 1] - '0' : 0) : (isdigit(bowls[balls + 2]) ? bowls[balls + 2] - '0' : 0));
                balls += 1;
            }
            frame++;
        } else if (c == '/') {
            score += 10 - (isdigit(bowls[balls - 1]) ? bowls[balls - 1] - '0' : 0);
        } else if (isdigit(c)) {
            score += c - '0';
        }
        balls++;
    }
    cout << score;
    return 0;
}