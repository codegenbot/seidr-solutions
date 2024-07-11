int main() {
    string input;
    getline(cin, input);
    string output;
    bool capital = false;
    for (char c : input) {
        if (c == '-') {
            capital = true;
            continue;
        }
        if (c == ' ') {
            capital = false;
            output += ' ';
            continue;
        }
        if (capital) {
            output += toupper(c);
            capital = false;
        } else {
            output += tolower(c);
        }
    }
    cout << output << endl;
    return 0;
}