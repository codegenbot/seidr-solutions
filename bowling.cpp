int score(const string& s) {
    int total = 0;
    int frame = 0;
    int throwIndex = 0;

    while (frame < 10) {
        if (s[throwIndex] == 'X') {
            total += 10;
            total += (s[throwIndex + 2] == 'X') ? 10 : (s[throwIndex + 2] == '/') ? 10 - s[throwIndex + 1] + 10 : s[throwIndex + 1] - '0' + s[throwIndex + 2] - '0';
            throwIndex++;
        } else if (s[throwIndex + 1] == '/') {
            total += 10;
            total += (s[throwIndex + 2] == 'X') ? 10 : s[throwIndex + 2] - '0';
            throwIndex += 2;
        } else {
            total += (s[throwIndex] == '-') ? 0 : s[throwIndex] - '0';
            total += (s[throwIndex + 1] == '-') ? 0 : s[throwIndex + 1] - '0';
            throwIndex += 2;
        }
        frame++;
    }

    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}