int main() {
    string input;
    getline(cin, input);
    bool convert = true;
    for(char &c : input) {
        if(c == ' ' || c == '-') {
            convert = true;
        } else if(convert) {
            if(c >= 'a' && c <= 'z') {
                c = c - 'a' + 'A';
            }
            convert = false;
        }
    }
    cout << input << endl;
    return 0;
}