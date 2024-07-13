int score(string s) {
    int total = 0;
    int frame = 0;
    int roll = 0;
    vector<int> pins(22);

    for (char c : s) {
        if (c == 'X') {
            pins[roll++] = 10;
            if (frame < 9) {
                pins[roll++] = 0;
            }
        } else if (c == '/') {
            pins[roll - 1] = 10 - pins[roll - 2];
        } else if (c == '-') {
            pins[roll++] = 0;
        } else {
            pins[roll++] = c - '0';
        }

        if (frame > 0 && (pins[2 * frame - 1] == 10 || pins[2 * frame] > 0)) {
            total += pins[2 * frame - 1] + pins[2 * frame];
            if (pins[2 * frame - 1] == 10) {
                total += pins[2 * frame + 1];
                if (pins[2 * frame + 1] == 10) {
                    total += pins[2 * frame + 2];
                }
            }
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