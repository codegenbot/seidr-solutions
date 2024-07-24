int main() {
    string input;
    getline(cin, input);

    bool capitalizeNext = false;
    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (c != ' ') {
            if (capitalizeNext) {
                cout << (char)toupper(c);
                capitalizeNext = false;
            } else {
                cout << c;
            }
        }
    }

    return 0;
}