int main() {
    string input;
    getline(cin, input);
    
    bool toUpper = true;
    for (char c : input) {
        if (c == '-') {
            toUpper = true;
        } else if (c != ' ') {
            if (toUpper) {
                cout << (char)toupper(c);
                toUpper = false;
            } else {
                cout << c;
            }
        }
    }
    
    return 0;
}