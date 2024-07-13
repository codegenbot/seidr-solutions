int main() {
    string line;
    getline(cin, line);
    
    bool capitalize = true;
    for (char &c : line) {
        if (c == ' ') {
            capitalize = true;
        } else if (c == '-') {
            c = ' ';
            capitalize = true;
        } else if (capitalize) {
            c = toupper(c);
            capitalize = false;
        } else {
            c = tolower(c);
        }
    }
    
    cout << line << endl;
    
    return 0;
}