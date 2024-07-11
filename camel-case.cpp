int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize && c >= 'a' && c <= 'z') {
                c -= 32;
            }
            capitalize = false;
        }
    }
    
    cout << input << endl;
    
    return 0;
}