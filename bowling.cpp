int score(string bowls) {
    int totalScore = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (frame == 10) break;
        if (bowls[i] == 'X') {
            totalScore += 10;
            if (bowls[i + 2] == 'X') {
                totalScore += 10 + (bowls[i + 4] == 'X' ? 10 : bowls[i + 4] - '0');
            } else {
                totalScore += (bowls[i + 2] == '/' ? 10 : bowls[i + 2] - '0') + (bowls[i + 4] == '/' ? 10 : bowls[i + 4] == '-' ? 0 : bowls[i + 4] - '0');
            }
            ++frame;
        } else if (bowls[i] == '/') {
            totalScore += 10 - (bowls[i - 1] - '0');
        } else if (bowls[i] == '-') {
            // do nothing for miss
        } else {
            totalScore += bowls[i] - '0';
        }
        if (bowls[i] != 'X') {
            ++i;
        }
    }
    return totalScore;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << score(bowls) << endl;
    return 0;
}