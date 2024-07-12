int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> points;
    for (char c : s) {
        if (c == 'X') {
            points.push_back(10);
            if (frame < 10) {
                points.push_back(0);
            }
            frame++;
        } else if (c == '/') {
            points.push_back(10 - points.back());
        } else if (c == '-') {
            points.push_back(0);
        } else {
            points.push_back(c - '0');
        }
    }
    for (int i = 0; i < points.size(); i++) {
        total += points[i];
        if (points[i] == 10 && frame < 10) {
            total += points[i + 1] + points[i + 2];
            frame++;
        } else if (ball % 2 == 1 || points[i] == 10) {
            frame++;
        }
        ball = (ball + 1) % 2;
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}