int solveBowling(string s) {
    int score = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i+2] == 'X') {
                score += 10;
                if (s[i+4] == 'X') {
                    score += 10;
                } else if (s[i+4] == '-') {
                    score += 0;
                } else {
                    score += s[i+4] - '0';
                }
            } else if (s[i+2] == '/') {
                score += 10;
            } else if (s[i+3] == '/') {
                score += 10;
            } else if (s[i+3] == '-') {
                score += s[i+2] - '0';
            } else {
                score += s[i+2] - '0' + s[i+3] - '0';
            }
            i++;
        } else if (s[i+1] == '/') {
            score += 10;
            if (s[i+2] == 'X') {
                score += 10;
            } else if (s[i+2] == '-') {
                score += 0;
            } else {
                score += s[i+2] - '0';
            }
            i += 2;
        } else if (s[i+2] == '/') {
            score += 10;
            if (s[i+3] == 'X') {
                score += 10;
            } else if (s[i+3] == '-') {
                score += 0;
            } else {
                score += s[i+3] - '0';
            }
            i += 3;
        } else {
            score += s[i] - '0' + s[i+1] - '0';
            i += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    int ans = solveBowling(s);
    cout << ans << endl;
    return 0;
}