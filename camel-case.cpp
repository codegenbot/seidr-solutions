int main() {
    string input;
    getline(cin, input);
    
    string output = "";
    bool capitalizeNext = false;
    for(char c : input) {
        if(c == '-') {
            capitalizeNext = true;
        } else if(c != ' ') {
            if(capitalizeNext) {
                output += toupper(c);
                capitalizeNext = false;
            } else {
                output += c;
            }
        }
    }
    
    cout << output << endl;
    
    return 0;
}