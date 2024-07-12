int main() {
    string input;
    getline(cin, input);
    
    bool isFirst = true;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '-') {
            isFirst = true;
        } else if (input[i] == ' ') {
            cout << ' ';
            isFirst = true;
        } else {
            if (isFirst) {
                cout << (char)toupper(input[i]);
                isFirst = false;
            } else {
                cout << input[i];
            }
        }
    }
    
    return 0;
}