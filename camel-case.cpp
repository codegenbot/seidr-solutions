int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = true;
    for (char& c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize && c >= 'a' && c <= 'z') {
                c = c - 'a' + 'A';
                capitalize = false;
            } else if (!capitalize && c >= 'A' && c <= 'Z') {
                c = c - 'A' + 'a';
            }
        }
    }
    
    cout << input << endl;
    
    return 0;
}