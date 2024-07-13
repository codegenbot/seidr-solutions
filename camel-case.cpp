int main() {
    string input;
    getline(cin, input);
    
    bool upperCase = false;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '-') {
            upperCase = true;
            continue;
        }
        if (upperCase) {
            cout << (char)toupper(input[i]);
            upperCase = false;
        } else {
            cout << input[i];
        }
    }
    
    return 0;
}