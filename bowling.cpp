int score(string s) {
    int sum = 0;
    int frame = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            sum += 10;
            sum += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '/' ? 10 - (s[i - 1] - '0') : s[i + 1] - '0');
            sum += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : s[i + 2] - '0');
            frame++;
        } else if (s[i] == '/') {
            sum += 10 - (s[i - 1] - '0');
        } else {
            sum += s[i] - '0';
        }
        frame++;
        if (frame == 10) break;
    }
    return sum;
}
int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}