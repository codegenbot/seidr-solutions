int main() {
    string input;
    getline(cin, input);

    bool capitalize = false;
    for (char& c : input) {
        if (c == '-') {
            capitalize = true;
            continue;
        }
        if (capitalize) {
            c = toupper(c);
            capitalize = false;
        }
    }
    cout << input << endl;

    return 0;
}