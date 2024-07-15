int score(const string& bowls) {
    int total_score = 0;
    int ball = 0;
    for (int frame = 0; frame < 10; ++frame) {
        if (bowls[ball] == 'X') {
            total_score += 10 + (bowls[ball + 1] == 'X' ? 10 + (bowls[ball + 2] == 'X' ? 10 : (bowls[ball + 2] - '0')) : (bowls[ball + 1] == '/' ? 10 : ((bowls[ball + 1] == '-') ? 0 : (bowls[ball + 1] - '0' + (bowls[ball + 2] == '/' ? 10 - (bowls[ball + 1] - '0') : (bowls[ball + 2] == '-' ? 0 : (bowls[ball + 2] - '0')))))));
            ball += 1;
        } else {
            total_score += (bowls[ball] == '/' ? 10 - (bowls[ball - 1] - '0') : (bowls[ball] == '-' ? 0 : (bowls[ball] - '0')));
        }
        ball += 1;
    }
    return total_score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << score(bowls) << endl;
    return 0;
}