int main() {
    string input;
    getline(cin, input);

    bool toUpper = false;
    for (char c : input) {
        if (c == '-') {
            toUpper = true;
            continue;
        }
        if (toUpper) {
            cout << (char)toupper(c);
            toUpper = false;
        } else {
            cout << c;
        }
    }

    return 0;
}