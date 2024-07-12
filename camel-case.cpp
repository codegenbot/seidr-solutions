int main() {
    string input;
    getline(cin, input);
    string output = "";

    bool capitalize = false;
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
            continue;
        }
        if (c == ' ') {
            capitalize = false;
            output += ' ';
            continue;
        }
        if (capitalize) {
            output += toupper(c);
        } else {
            output += c;
        }
    }

    cout << output << endl;

    return 0;
}