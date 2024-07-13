int bowlingScore(string s) {
    int ans = 0, frame = 0, i = 0;
    while (frame < 10) {
        if (s[i] == 'X') {
            ans += 10;
            ans += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/') ? 10 - s[i + 1] + '0' : s[i + 1] + s[i + 2] - 2 * '0';
            i++;
        } else if (s[i + 1] == '/') {
            ans += 10;
            ans += (s[i + 2] == 'X') ? 10 : s[i + 2] - '0';
            i += 2;
        } else {
            ans += s[i] + s[i + 1] - 2 * '0';
            i += 2;
        }
        frame++;
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}