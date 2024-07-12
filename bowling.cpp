int main() {
    string input;
    cin >> input;

    int score = 0;
    int frame = 1;
    int roll = 1;
    int bonus = 0;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                bonus = 2;
            } else {
                bonus = 0;
            }
            roll = 1;
            frame++;
        } else if (c == '/') {
            score += 10 - (input[roll - 2] - '0');
            if (frame < 10) {
                bonus = 1;
            } else {
                bonus = 0;
            }
            roll = 1;
            frame++;
        } else if (c == '-') {
            bonus--;
            if (roll > 1) {
                score += 0;
                roll--;
            }
        } else {
            score += c - '0';
            if (frame < 10 && roll < 2) {
                bonus = 0;
            }
            roll++;
        }
        if (bonus > 0) {
            score += c - '0';
            bonus--;
        }
    }

    cout << score << endl;

    return 0;
}