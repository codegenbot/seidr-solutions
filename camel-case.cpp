int main() {
    string input;
    getline(cin, input);
    string output = "";
    bool toUpper = false;
    
    for (char c : input) {
        if (c == '-') {
            toUpper = true;
        } else if (c != ' ') {
            output += (toUpper ? toupper(c) : c);
            toUpper = false;
        }
    }
    
    cout << output << endl;

    return 0;
}