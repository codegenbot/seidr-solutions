int score(string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size() && frame < 10; ++i) {
        if (s[i] == 'X') {
            total += 10;
            if (i + 2 < s.size()) {
                if (s[i + 2] == 'X') {
                    total += 10;
                    if (i + 4 < s.size()) {
                        if (s[i + 4] == 'X') {
                            total += 10;
                        } else if (s[i + 4] != '/') {
                            total += s[i + 4] - '0';
                        }
                    }
                } else if (s[i + 3] == '/') {
                    total += 10;
                } else if (s[i + 4] == '/') {
                    total += 10;
                } else {
                    total += s[i + 2] - '0' + s[i + 3] - '0';
                }
            }
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            if (i + 1 < s.size()) {
                total += s[i + 1] - '0';
            }
            frame++;
        } else if (s[i] == '-') {
            // do nothing
        } else {
            total += s[i] - '0';
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