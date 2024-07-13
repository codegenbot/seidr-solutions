int calculateBowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> points;

    for (char c : s) {
        if (c == 'X') {
            points.push_back(10);
            if (frame < 10) {
                points.push_back(0);
                frame++;
            }
        } else if (c == '/') {
            points.push_back(10 - points.back());
            frame++;
        } else if (c == '-') {
            points.push_back(0);
        } else {
            points.push_back(c - '0');
        }
    }

    for (int i = 0; i < points.size(); i++) {
        if (points[i] == 10) {
            score += points[i] + points[i + 1] + points[i + 2];
        } else if (points[i] + points[i + 1] == 10) {
            score += points[i] + points[i + 1] + points[i + 2];
            i++;
        } else {
            score += points[i] + points[i + 1];
            i++;
        }
    }

    return score;
}
int main() {
    string s;
    cin >> s;
    cout << calculateBowlingScore(s) << endl;
    return 0;
}