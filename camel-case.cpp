int main() {
    string input, word;
    getline(cin, input);
    bool capitalize = false;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c == ' ') {
            cout << ' ';
            capitalize = false;
        } else {
            if (capitalize) {
                cout << (char)toupper(c);
                capitalize = false;
            } else {
                cout << c;
            }
        }
    }

    return 0;
}