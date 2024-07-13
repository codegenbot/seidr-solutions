int main() {
    string input;
    getline(cin, input);
    bool isFirst = true;
    for (char c : input) {
        if (c == '-') {
            isFirst = true;
        } else if (isFirst) {
            cout << (char)toupper(c);
            isFirst = false;
        } else {
            cout << c;
        }
    }
    return 0;
}