int main() {
    string input;
    getline(cin, input);
    bool hyphenFound = false;
    
    for(int i = 0; i < input.size(); i++) {
        if(input[i] == '-') {
            hyphenFound = true;
        } else if(hyphenFound) {
            cout << (char)toupper(input[i]);
            hyphenFound = false;
        } else {
            cout << input[i];
        }
    }
    
    return 0;
}