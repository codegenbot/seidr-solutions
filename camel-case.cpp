int main() {
    string input;
    getline(cin, input);

    bool capitalize = false;
    string output = "";
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
            continue;
        }
        if (capitalize) {
            output += toupper(c);
            capitalize = false;
        } else {
            output += c;
        }
    }

    cout << output << endl;

    return 0;
}