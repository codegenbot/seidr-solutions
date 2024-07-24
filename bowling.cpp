int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    int balls[22];
    for (char c : s) {
        if (c == 'X') {
            balls[ball++] = 10;
            if (frame < 10) {
                balls[ball++] = 0;
            }
        } else if (c == '/') {
            balls[ball-1] = 10 - balls[ball-2];
        } else if (c == '-') {
            balls[ball++] = 0;
        } else {
            balls[ball++] = c - '0';
        }
    }
    for (int i = 0; i < 20 && frame <= 10; ++i) {
        if (balls[i] == 10) {
            total += 10 + balls[i+1] + balls[i+2];
            frame++;
        } else if (balls[i] + balls[i+1] == 10) {
            total += 10 + balls[i+2];
            i++;
            frame++;
        } else {
            total += balls[i] + balls[i+1];
            i++;
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