int main() {
    string input, output;
    getline(cin, input);
    bool capitalize = true;
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            output += toupper(c);
            capitalize = false;
        } else {
            output += c;
        }
    }
    cout << output << endl;
    return 0;
}