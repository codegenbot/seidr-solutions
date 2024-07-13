int main() {
    string input;
    getline(cin, input);
    
    bool toUpper = false;
    for (char &c : input) {
        if (c == '-') {
            toUpper = true;
        } else {
            if (toUpper && c >= 'a' && c <= 'z') {
                c = toupper(c);
                toUpper = false;
            }
        }
    }

    cout << input << endl;
    
    return 0;
}