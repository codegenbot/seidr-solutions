int main() {
    string input;
    getline(cin, input);

    bool convert = false;
    for (char &c : input) {
        if (c == '-') {
            convert = true;
        } else if (convert) {
            c = toupper(c);
            convert = false;
        }
    }

    cout << input << endl;

    return 0;
}