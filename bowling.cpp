int score(const string& bowls) {
    int totalScore = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size() && frame < 10; ++i) {
        if (bowls[i] == 'X') {
            totalScore += 10;
            if (i + 2 < bowls.size()) {
                if (bowls[i + 2] == 'X') {
                    totalScore += 10;
                } else {
                    if (bowls[i + 1] == '/') {
                        totalScore += 10;
                    } else {
                        totalScore += bowls[i + 1] - '0';
                    }
                }
            }
            frame++;
        } else if (bowls[i] == '/') {
            totalScore += 10 - (bowls[i - 1] - '0');
            if (i + 1 < bowls.size()) {
                totalScore += bowls[i + 1] - '0';
            }
            frame++;
        } else if (bowls[i] == '-') {
            // Do nothing for a miss
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