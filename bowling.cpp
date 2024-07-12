int score(string s) {
    int sum = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            sum += 10;
            if (s[i + 1] == 'X') {
                sum += 10;
                if (s[i + 2] == 'X') {
                    sum += 10;
                } else {
                    sum += s[i + 2] - '0';
                }
            } else {
                if (s[i + 2] == '/') {
                    sum += 10;
                } else {
                    sum += s[i + 1] - '0' + s[i + 2] - '0';
                }
            }
            i++;
        } else if (s[i + 1] == '/') {
            sum += 10;
            sum += s[i + 2] - '0';
            i += 2;
        } else {
            sum += s[i] - '0' + s[i + 1] - '0';
            i += 2;
        }
        frame++;
    }
    return sum;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}