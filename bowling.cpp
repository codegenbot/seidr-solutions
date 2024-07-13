int score(string bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[i + 1] == 'X') ? 10 + ((i + 2 < bowls.size()) ? (bowls[i + 2] - '0') : 0) : (bowls[i + 2] == '/') ? 10 : bowls[i + 1] + bowls[i + 2] - 2 * '0';
                ++frame;
            }
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0') + ((i + 1 < bowls.size()) ? (bowls[i + 1] - '0') : 0);
            if (frame < 10)
                ++frame;
        } else {
            score += bowls[i] - '0';
            if (frame < 10)
                ++frame;
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << score(bowls) << endl;
    return 0;
}