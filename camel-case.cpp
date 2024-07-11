int main() {
    string input;
    getline(cin, input);
    bool newWord = true;
    for(char c : input) {
        if(c == '-') {
            cout << "";
            newWord = true;
        } else if(c != ' ' && newWord) {
            cout << (char)toupper(c);
            newWord = false;
        } else if(c != ' ') {
            cout << c;
        }
    }
    return 0;
}