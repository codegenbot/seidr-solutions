int main() {
    string input;
    getline(cin, input);
    bool convert = false;
    for (char c : input) {
        if (c == '-') {
            convert = true;
            continue;
        }
        if (convert) {
            cout << (char)toupper(c);
            convert = false;
        } else {
            cout << c;
        }
    }
    return 0;
}