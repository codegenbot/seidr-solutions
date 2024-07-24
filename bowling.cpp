int score(string s) {
    int sum = 0;
    int frame = 0;
    for (int i = 0; i < s.size() && frame < 10; ++i) {
        if (s[i] == 'X') {
            sum += 10;
            sum += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/') ? 10 - (s[i + 1] - '0') : (s[i + 1] - '0') + (s[i + 2] - '0');
            ++frame;
        } else if (s[i] == '/') {
            sum += 10 - (s[i - 1] - '0');
            sum += (s[i + 1] == 'X') ? 10 : (s[i + 1] - '0');
            ++frame;
        } else if (s[i] >= '0' && s[i] <= '9') {
            sum += s[i] - '0';
            if (s[i + 1] == '/') {
                sum += 10 - (s[i] - '0');
            }
            ++i;
        }
    }
    return sum;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}