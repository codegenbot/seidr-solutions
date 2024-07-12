int main() {
    string input;
    getline(cin, input);
    bool first = true;
    for (char c : input) {
        if (c == '-') {
            first = true;
        } else if (first) {
            cout << (char)toupper(c);
            first = false;
        } else {
            cout << c;
        }
    }
    return 0;
}