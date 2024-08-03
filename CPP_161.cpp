void solve(string &s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }

    if (count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        reverse(s.begin(), s.end());
    }

    return s;
}

int main() {
    string s;
    cin >> s;
    solve(s);
    cout << s << endl;
    return 0;
}