int main() {
    string input;
    getline(cin, input);
    bool isFirstWord = true;
    for (char& c : input) {
        if (c == '-') {
            isFirstWord = true;
        } else if (isFirstWord) {
            c = toupper(c);
            isFirstWord = false;
        }
    }
    cout << input << endl;
    return 0;
}