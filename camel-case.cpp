int main() {
    string input;
    getline(cin, input);
    string output = "";
    bool capitalize = false;
    
    for(char c : input) {
        if(c == '-') {
            capitalize = true;
        } else if(c == ' ') {
            capitalize = false;
            output += ' ';
        } else {
            if(capitalize) {
                output += toupper(c);
            } else {
                output += c;
            }
            capitalize = false;
        }
    }
    
    cout << output << endl;
    
    return 0;
}