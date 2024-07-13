int main() {
    string input;
    getline(cin, input);
    
    bool first = true;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == '-') {
            first = true;
        } else if (input[i] == ' ') {
            cout << " ";
            first = true;
        } else {
            if (first) {
                cout << (char)toupper(input[i]);
                first = false;
            } else {
                cout << input[i];
            }
        }
    }
    
    return 0;
}