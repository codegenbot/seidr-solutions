int score(const string& s) {
    int result = 0;
    int frame = 0;
    int balls = 0;
    vector<int> frames(10, 0);

    for (char c : s) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame - 1];
            frame++;
            balls = 0;
        } else if (c == '-') {
            balls++;
        } else {
            frames[frame] += c - '0';
            balls++;
            if (balls == 2) {
                frame++;
                balls = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        result += frames[i];
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}