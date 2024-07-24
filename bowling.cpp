int score(string s) {
    int total = 0;
    int frame = 0;
    int rolls = 0;
    vector<int> points(21, 0);

    for (char c : s) {
        if (c == 'X') {
            points[rolls] = 10;
            rolls++;
        } else if (c == '/') {
            points[rolls] = 10 - points[rolls - 1];
            rolls++;
        } else if (c == '-') {
            points[rolls] = 0;
            rolls++;
        } else {
            points[rolls] = c - '0';
            rolls++;
        }
    }

    for (int i = 0; frame < 10; i += 2) {
        if (points[i] == 10) {
            total += 10 + points[i + 1] + points[i + 2];
            frame++;
        } else if (points[i] + points[i + 1] == 10) {
            total += 10 + points[i + 2];
            frame++;
        } else {
            total += points[i] + points[i + 1];
            frame++;
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