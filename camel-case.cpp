int main() {
    string s;
    getline(cin, s);
    
    bool convert = false;
    for (char &c : s) {
        if (c == '-') {
            convert = true;
            continue;
        }
        if (convert) {
            c = toupper(c);
            convert = false;
        }
    }
    
    cout << s << endl;
    
    return 0;
}