int main() {
    string input;
    getline(cin, input);

    bool capitalize = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            c = toupper(c);
            capitalize = false;
        }
    }

    cout << input << endl;

    return 0;
}