int main() {
    string input;
    getline(cin, input);

    bool convertNextCharToUpper = false;
    for (char c : input) {
        if (c == '-') {
            convertNextCharToUpper = true;
        } else {
            if (convertNextCharToUpper) {
                cout << (char)toupper(c);
                convertNextCharToUpper = false;
            } else {
                cout << c;
            }
        }
    }

    return 0;
}