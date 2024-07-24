int score(string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size() && frame < 10; ++i) {
        if (s[i] == 'X') {
            total += 10;
            if (s[i + 2] == '/') {
                total += 10;
            } else {
                if (s[i + 1] == 'X') total += 10;
                else total += s[i + 1] - '0';
                if (s[i + 2] == 'X') total += 10;
                else total += s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : s[i + 2] - '0';
            }
            ++frame;
            continue;
        }
        if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            if (s[i + 1] == 'X') total += 10;
            else total += s[i + 1] == '/' ? 10 - (s[i - 1] - '0') : s[i + 1] - '0';
        } else {
            total += s[i] - '0';
        }
        if (s[i] == 'X' || s[i] == '/') ++frame;
    }
    return total;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << score(bowls) << endl;
    return 0;
}