int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> points(22, 0);
    
    for (char c : s) {
        if (c == 'X') {
            points[ball++] = 10;
            if (frame < 10) {
                points[ball++] = 0;
            }
        } else if (c == '/') {
            points[ball - 1] = 10 - points[ball - 2];
            if (frame < 10) {
                points[ball++] = 0;
            }
        } else if (c == '-') {
            points[ball++] = 0;
        } else {
            points[ball++] = c - '0';
        }
    }
    
    for (int i = 0; i < 20; i += 2) {
        if (points[i] == 10) {
            total += 10 + points[i + 2] + points[i + 4];
        } else if (points[i] + points[i + 1] == 10) {
            total += 10 + points[i + 2];
        } else {
            total += points[i] + points[i + 1];
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