int main() {
    string input;
    getline(cin, input);
    
    bool firstWord = true;
    for (char &c : input) {
        if (c == '-') {
            firstWord = true;
        } else if (firstWord) {
            c = toupper(c);
            firstWord = false;
        }
    }
    
    cout << input << endl;
    
    return 0;
}