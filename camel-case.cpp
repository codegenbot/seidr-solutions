int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize && islower(c)) {
            c = toupper(c);
            capitalize = false;
        } else if (!capitalize && isupper(c)) {
            c = tolower(c);
        }
    }

    cout << input << endl;

    return 0;
}