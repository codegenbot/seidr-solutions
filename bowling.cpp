int score(string s) {
    int sum = 0, frame = 0, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            sum += 10;
            if (frame < 9) {
                if (s[ball + 1] == 'X') {
                    sum += 10;
                    if (s[ball + 2] == 'X') {
                        sum += 10;
                    } else {
                        sum += s[ball + 2] - '0';
                    }
                } else {
                    sum += s[ball + 1] - '0';
                    if (s[ball + 2] == '/') {
                        sum += 10 - (s[ball + 1] - '0');
                    } else {
                        sum += s[ball + 2] - '0';
                    }
                }
            }
            ball++;
        } else if (c == '/') {
            sum += 10 - (s[ball - 1] - '0');
            if (frame < 9) {
                sum += s[ball + 1] - '0';
            }
            ball++;
        } else {
            sum += c - '0';
            if (frame < 9 && c != '-') {
                if (s[ball + 1] == '/') {
                    sum += 10 - (c - '0');
                }
            }
        }
        if (c == 'X' || ball % 2 == 1) {
            frame++;
        }
        if (frame == 10) {
            break;
        }
        ball++;
    }
    return sum;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}