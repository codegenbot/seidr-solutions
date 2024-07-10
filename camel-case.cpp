int main() {
    string input;
    getline(cin, input);

    bool capitalizeNextChar = false;
    for(char& c : input) {
        if(c == ' ') {
            capitalizeNextChar = true;
        } else if(c == '-') {
            capitalizeNextChar = true;
            c = ' '; // Convert '-' to ' ' for camelCase
        } else {
            if(capitalizeNextChar && islower(c)) {
                c = toupper(c);
            }
            capitalizeNextChar = false;
        }
    }

    cout << input << endl;

    return 0;
}