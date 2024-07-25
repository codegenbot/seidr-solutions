int score(string S) {
    int res = 0, frame = 0, ball = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'X') {
            res += 10 + (S[i + 1] == 'X' ? 10 : (S[i + 2] == '/' ? 10 : S[i + 2] - '0'));
            frame++;
            if (frame == 10) break;
            ball = 0;
        } else if (S[i] == '/') {
            res += 10 - (S[i - 1] - '0') + (S[i + 1] == 'X' ? 10 : S[i + 1] - '0');
            frame++;
            if (frame == 10) break;
            ball = 0;
        } else {
            res += S[i] - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        }
    }
    return res;
}

int main() {
    string S;
    cin >> S;
    cout << score(S) << endl;
    return 0;
}