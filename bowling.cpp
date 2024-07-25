int score(string s) {
    int total = 0, frame = 0, ball = 0;
    vector<int> points(21, 0);

    for (char c : s) {
        if (c == 'X') {
            points[ball++] = 10;
            frame++;
        } else if (c == '/') {
            points[ball-1] = 10 - points[ball-1];
            frame++;
        } else if (c == '-') {
            points[ball++] = 0;
            frame++;
        } else {
            points[ball++] = c - '0';
            frame++;
        }

        if (frame == 2 || c == 'X') {
            for (int i = 0; i < ball; i++) {
                total += points[i];
            }

            frame = 0;
        }
    }

    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}