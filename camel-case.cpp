int main() {
    string input;
    getline(cin, input);
    
    string result = "";
    bool capitalize = false;
    
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize) {
                result += toupper(c);
                capitalize = false;
            } else {
                result += tolower(c);
            }
        }
    }
    
    cout << result << endl;
    
    return 0;
}