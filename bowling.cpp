int main() {
    string bowls;
    cin >> bowls;

    int score = 0;
    int frame = 1;
    int rolls = 0;

    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[rolls + 1] == 'X') ? 10 : (bowls[rolls + 1] - '0');
                score += (bowls[rolls + 2] == 'X') ? 10 : (bowls[rolls + 2] == '/' ? 10 - (bowls[rolls + 1] - '0') : (bowls[rolls + 2] - '0'));
            }
            rolls++;
            frame++;
        } else if (c == '/') {
            score += 10 - (bowls[rolls - 1] - '0');
            score += (bowls[rolls + 1] == 'X') ? 10 : (bowls[rolls + 1] - '0');
            rolls += 2;
            frame++;
        } else if (c == '-') {
            // do nothing
        } else {
            score += c - '0';
            frame = (c == '1' && frame < 10) ? frame + 1 : frame;
            rolls++;
        }
    }

    cout << score << endl;

    return 0;
}