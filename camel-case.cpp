int main() {
    string input;
    getline(cin, input);

    bool isFirstWord = true;
    for (char& c : input) {
        if (c == '-') {
            isFirstWord = true;
        } else if (isFirstWord) {
            cout << (char)toupper(c);
            isFirstWord = false;
        } else {
            cout << c;
        }
    }

    return 0;
}