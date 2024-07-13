int getScore(const string& bowls) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    vector<int> points(22, 0);
    for (char ch : bowls) {
        if (ch == 'X') {
            points[frame] = 10;
            points[frame + 1] = 10;
            points[frame + 2] = 10;
            frame += 2;
        } else if (ch == '/') {
            points[frame] = 10 - points[frame - 1];
        } else if (ch == '-') {
            points[frame] = 0;
        } else {
            points[frame] = ch - '0';
        }
        frame++;
    }
    for (int i = 0; i < 10; i++) {
        if (points[ball] == 10) {
            score += 10 + points[ball + 1] + points[ball + 2];
            ball++;
        } else if (points[ball] + points[ball + 1] == 10) {
            score += 10 + points[ball + 2];
            ball += 2;
        } else {
            score += points[ball] + points[ball + 1];
            ball += 2;
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << getScore(bowls) << endl;
    return 0;
}