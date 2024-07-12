int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            cout << (char)toupper(c);
            capitalize = false;
        } else {
            cout << c;
        }
    }
    
    return 0;
}