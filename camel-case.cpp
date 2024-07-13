int main() {
    string input;
    getline(cin, input);

    bool capitalize = false;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            cout << (char)toupper(c);
            capitalize = false;
        } else {
            if (c != ' ') {
                cout << c;
            } else {
                cout << " ";
            }
        }
    }

    return 0;
}