int main() {
    string str;
    getline(cin, str);
    bool toUpper = false;
    for (char &c : str) {
        if (c == '-') {
            toUpper = true;
        } else if (toUpper) {
            c = toupper(c);
            toUpper = false;
        }
    }
    cout << str;
    return 0;
}