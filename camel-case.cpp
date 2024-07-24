int main() {
    string input;
    getline(cin, input);
    
    bool isFirstWord = true;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '-') {
            isFirstWord = true;
        } else if (isFirstWord) {
            cout << (char)toupper(input[i]);
            isFirstWord = false;
        } else {
            cout << input[i];
        }
    }
    
    return 0;
}