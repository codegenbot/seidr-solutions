int main() {
    string input;
    getline(cin, input);

    bool makeUpper = false;
    for (char &c : input) {
        if (c == '-') {
            makeUpper = true;
        } else if (c != ' ') {
            if (makeUpper) {
                c = toupper(c);
                makeUpper = false;
            }
        }
    }

    cout << input << endl;

    return 0;
}