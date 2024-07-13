int main() {
    string input;
    getline(cin, input);
    bool toUpper = false;
    
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == '-') {
            toUpper = true;
        } else if (input[i] != ' ') {
            if (toUpper) {
                cout << (char)toupper(input[i]);
                toUpper = false;
            } else {
                cout << input[i];
            }
        }
    }
    
    return 0;
}