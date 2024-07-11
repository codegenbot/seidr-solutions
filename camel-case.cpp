int main() {
    string input;
    getline(cin, input);
    
    string output = "";
    bool capitalize = false;
    
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize) {
                output += toupper(c);
                capitalize = false;
            } else {
                output += c;
            }
        }
    }
    
    cout << output << endl;
    
    return 0;
}