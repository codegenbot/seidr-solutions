int main() {
    string input;
    getline(cin, input);
    
    bool capital = false;
    for (char &c : input) {
        if (c == '-') {
            capital = true;
            continue;
        }
        if (capital) {
            c = toupper(c);
            capital = false;
        }
    }
    
    cout << input << endl;
    
    return 0;
}