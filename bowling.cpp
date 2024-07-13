int score(string bowls) {
    int totalScore = 0, frame = 1, bowl = 0;
    for (int i = 0; i < bowls.size() && frame <= 10; ++i) {
        if (bowls[i] == 'X') {
            totalScore += 10;
            if (frame < 10) {
                totalScore += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 2] == '/') ? 10 - int('0') : int(bowls[i + 1] - '0') + int(bowls[i + 2] - '0');
                bowl += 2;
            }
            bowl++;
            frame++;
        } else if (bowls[i] == '/') {
            totalScore += 10 - int(bowls[i - 1] - '0');
            totalScore += (bowls[i + 1] == 'X') ? 10 : int(bowls[i + 1] - '0');
            bowl++;
            frame++;
        } else if (isdigit(bowls[i])) {
            totalScore += int(bowls[i] - '0');
            bowl++;
            if (bowl % 2 == 0) frame++;
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