int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    int frames[10][2] = {0};

    for (char c : s) {
        if (c == 'X') {
            frames[frame-1][0] = 10;
            frames[frame-1][1] = 0;
            frame++;
        } else if (c == '/') {
            frames[frame-1][1] = 10 - frames[frame-1][0];
            frame++;
        } else if (c == '-') {
            frames[frame-1][ball] = 0;
            ball++;
        } else {
            frames[frame-1][ball] = c - '0';
            ball++;
        }

        if (frame > 10) break;
        if (ball == 2 || frames[frame-1][0] == 10) {
            total += frames[frame-1][0] + frames[frame-1][1];
            ball = 0;
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