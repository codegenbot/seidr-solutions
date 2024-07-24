int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = true;
    for(char& c : input) {
        if(c == ' ') {
            capitalize = true;
        } else if(c == '-') {
            capitalize = true;
            continue;
        } else if(capitalize && islower(c)) {
            c = toupper(c);
            capitalize = false;
        } else {
            c = tolower(c);
            capitalize = false;
        }
    }
    cout << input << endl;
    
    return 0;
}