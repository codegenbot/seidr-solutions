int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = false;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ' && capitalize) {
            c = toupper(c);
            capitalize = false;
        }
    }
    
    cout << input << endl;
    
    return 0;
}