int main() {
    string input;
    getline(cin, input);
    
    bool first = true;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == ' ') {
            first = true;
        } else if (input[i] == '-' && i + 1 < input.length()) {
            input[i + 1] = toupper(input[i + 1]);
        } else if (isalpha(input[i])) {
            if (first) {
                input[i] = tolower(input[i]);
                first = false;
            }
        }
    }

    cout << input << endl;

    return 0;
}