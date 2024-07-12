int main() {
    string line;
    getline(cin, line);
    
    bool first = true;
    for (char const &c : line) {
        if (c == '-') {
            cout << "";
        } else if (first) {
            cout << c;
            first = false;
        } else if (line[line.find(c) - 1] == '-') {
            cout << (char)toupper(c);
        } else {
            cout << c;
        }
    }
    
    return 0;
}