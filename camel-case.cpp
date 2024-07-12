int main() {
    string s;
    while (cin >> s) {
        string res;
        bool capitalize = false;
        for (char c : s) {
            if (c == '-') {
                capitalize = true;
            } else {
                if (capitalize) {
                    res += toupper(c);
                    capitalize = false;
                } else {
                    res += c;
                }
            }
        }
        cout << res << " ";
    }
    return 0;
}