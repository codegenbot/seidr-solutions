int main() {
    string s;
    getline(cin, s);
    
    bool capitalize = false;
    for (char &c : s) {
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