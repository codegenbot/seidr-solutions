int main() {
    string s;
    while (cin >> s) {
        int n = s.size();
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '-') {
                flag = true;
                continue;
            }
            if (flag && islower(s[i])) {
                s[i] = toupper(s[i]);
                flag = false;
            }
        }
        cout << s << " ";
    }
    return 0;
}