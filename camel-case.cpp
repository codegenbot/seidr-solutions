int main() {
    string input;
    getline(cin, input);
    bool firstWord = true;
    for (char &c : input) {
        if (c == '-') {
            firstWord = false;
            continue;
        }
        if (firstWord && islower(c)) {
            c = toupper(c);
            firstWord = false;
        } else if (!firstWord && isupper(c)) {
            c = tolower(c);
        }
    }
    cout << input << endl;
    return 0;
}