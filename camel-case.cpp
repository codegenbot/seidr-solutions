int main() {
    string input;
    getline(cin, input);
    
    bool firstWord = true;
    for (char& c : input) {
        if (c == '-') {
            firstWord = true;
        } else if (c != ' ') {
            if (firstWord) {
                cout << (char)toupper(c);
                firstWord = false;
            } else {
                cout << c;
            }
        }
    }
    
    return 0;
}