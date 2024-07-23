int main() {
    string input;
    getline(cin, input);
    
    bool capitalizeNext = false;
    for (char& c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            c = toupper(c);
            capitalizeNext = false;
        }
    }
    
    cout << input << endl;
    
    return 0;
}