int main() {
    string input;
    getline(cin, input);
    
    bool isDash = false;
    for (char &c : input) {
        if (c == '-' || c == ' ') {
            isDash = true;
            break;
        }
    }
    
    if (!isDash) {
        cout << input << endl;
        return 0;
    }
    
    bool capitalize = false;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c == ' ') {
            capitalize = false;
        } else {
            if (capitalize) {
                cout << (char)toupper(c);
            } else {
                cout << c;
            }
        }
    }
    cout << endl;
    
    return 0;
}