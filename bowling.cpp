int score(string s) {
    int i = 0, sum = 0, frame = 0;
    for (int f = 0; f < 10; ++f) {
        if (s[i] == 'X') {
            sum += 10 + (s[i+1] == 'X' ? 10 + (s[i+2] == 'X' ? 10 : s[i+2] - '0') : (s[i+2] == '/' ? 10 : s[i+1] - '0' + s[i+2] - '0'));
            i += 1;
        } else if (s[i+1] == '/') {
            sum += 10;
            sum += s[i+2] == 'X' ? 10 : s[i+2] - '0';
            i += 2;
        } else {
            sum += s[i] - '0' + s[i+1] - '0';
            i += 2;
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