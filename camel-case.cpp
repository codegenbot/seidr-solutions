int main() {
    string input;
    getline(cin, input);
    
    bool uppercase = false;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '-') {
            uppercase = true;
            continue;
        }
        
        if (uppercase) {
            cout << char(toupper(input[i]));
            uppercase = false;
        } else if (input[i] != ' ') {
            cout << input[i];
        }
    }
    
    return 0;
}