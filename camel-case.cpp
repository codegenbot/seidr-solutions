int main() {
    string input;
    getline(cin, input);
    string output = "";
    bool capitalize = false;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c == ' ') {
            capitalize = false;
            output += c;
        } else {
            if (capitalize) {
                output += toupper(c);
            } else {
                output += tolower(c);
            }
            capitalize = false;
        }
    }

    cout << output << endl;

    return 0;
}