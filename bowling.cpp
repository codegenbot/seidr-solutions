int main() {
    string s;
    cin >> s;

    int score = 0;
    int frame = 1;
    int rolls = 0;
    int bonus = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            bonus += 2;
            rolls++;
            if (rolls == 2 || frame == 10) {
                score += bonus;
                bonus = 0;
                rolls = 0;
                frame++;
            }
        } else if (c == '/') {
            score += 10 - (s[rolls - 1] - '0');
            bonus += 1;
            rolls++;
        } else if (c == '-') {
            rolls++;
            if (rolls == 2 || frame == 10) {
                score += bonus;
                bonus = 0;
                rolls = 0;
                frame++;
            }
        } else {
            score += c - '0';
            rolls++;
            if (rolls == 2 || frame == 10) {
                score += bonus;
                bonus = 0;
                rolls = 0;
                frame++;
            }
        }
    }

    cout << score << endl;

    return 0;
}