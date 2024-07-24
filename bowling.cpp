int score(string s) {
    int res = 0;
    int frame = 0;
    int balls[21];
    for (char c : s) {
        if (c == 'X') {
            balls[frame++] = 10;
            balls[frame++] = 0;
        } else if (c == '/') {
            balls[frame-1] = 10 - balls[frame-2];
        } else if (c == '-') {
            balls[frame++] = 0;
        } else {
            balls[frame++] = c - '0';
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (balls[i*2] == 10) {
            res += 10 + balls[i*2+2] + balls[i*2+3];
            if (balls[i*2+2] == 10) {
                res += balls[i*2+4];
            }
        } else if (balls[i*2] + balls[i*2+1] == 10) {
            res += 10 + balls[i*2+2];
        } else {
            res += balls[i*2] + balls[i*2+1];
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}