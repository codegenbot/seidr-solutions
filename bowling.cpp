int score(const string &bowls) {
    int totalScore = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (frame == 10) break;
        if (bowls[i] == 'X') {
            totalScore += 10;
            if (i + 2 < bowls.size()) {
                if (bowls[i + 2] == 'X') {
                    totalScore += 10;
                    if (i + 4 < bowls.size()) {
                        totalScore += (bowls[i + 4] == 'X') ? 10 : bowls[i + 4] - '0';
                    }
                } else {
                    totalScore += (bowls[i + 2] == '/') ? 10 : bowls[i + 2] - '0';
                    totalScore += (bowls[i + 3] == 'X') ? 10 : bowls[i + 3] - '0';
                }
            }
            frame++;
        } else if (bowls[i] == '/') {
            totalScore += 10 - (bowls[i - 1] - '0');
            totalScore += (i + 1 < bowls.size()) ? (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0') : 0;
            frame++;
        } else {
            totalScore += bowls[i] - '0';
            frame++;
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