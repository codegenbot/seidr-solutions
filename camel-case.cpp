int main() {
    string input;
    getline(cin, input);
    
    bool toUpper = false;
    for (char &c : input) {
        if (c == '-') {
            toUpper = true;
        } else if (toUpper && islower(c)) {
            c = toupper(c);
            toUpper = false;
        } else if (c == ' ') {
            toUpper = false;
        }
    }
    
    cout << input << endl;
    
    return 0;
}