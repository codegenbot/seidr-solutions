int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = false;
    for (char& c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ' && capitalize) {
            cout << (char)toupper(c);
            capitalize = false;
        } else {
            if (c != ' ') {
                cout << c;
            }
        }
    }
    
    return 0;
}