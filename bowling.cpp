int calculateScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int i = 0;

    while (frame <= 10 && i < bowls.size()) {
        if (bowls[i] == 'X') {
            score += 10;
            score += (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] == '/' ? 10 - (bowls[i + 2] - '0') : bowls[i + 1] - '0');
            score += (bowls[i + 2] == 'X' ? 10 : bowls[i + 2] == '/' ? 10 - (bowls[i + 3] - '0') : bowls[i + 2] - '0');
            i++;
        } else if (bowls[i + 1] == '/') {
            score += 10;
            score += (bowls[i + 2] == 'X' ? 10 : bowls[i + 2] - '0');
            i += 2;
        } else {
            score += bowls[i] - '0';
            score += bowls[i + 1] - '0';
            i += 2;
        }
        frame++;
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateScore(bowls) << endl;
    return 0;
}