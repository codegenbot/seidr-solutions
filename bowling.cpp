int score(const string& bowls) {
    int totalScore = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size() && frame < 10; i++) {
        if (bowls[i] == 'X') {
            totalScore += 10;
            totalScore += (bowls[i + 1] == 'X' ? 10 : isdigit(bowls[i + 1]) ? bowls[i + 1] - '0' : 10);
            totalScore += (bowls[i + 2] == 'X' ? 10 : bowls[i + 2] == '/' ? 10 - (bowls[i + 1] - '0') : isdigit(bowls[i + 2]) ? bowls[i + 2] - '0' : 10);
            frame++;
        } else if (isdigit(bowls[i])) {
            totalScore += bowls[i] - '0';
            if (i + 1 < bowls.size() && bowls[i + 1] == '/') {
                totalScore += 10 - (bowls[i] - '0');
                i++;
            }
            frame++;
        } else if (bowls[i] == '/') {
            totalScore += 10 - (bowls[i - 1] - '0');
            totalScore += (bowls[i + 1] == 'X' ? 10 : isdigit(bowls[i + 1]) ? bowls[i + 1] - '0' : 10);
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