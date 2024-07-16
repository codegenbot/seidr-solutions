int main() {
    string input;
    getline(cin, input);

    bool capitalizeNext = false;
    string output = "";

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (c == ' ') {
            output += ' ';
            capitalizeNext = false;
        } else {
            if (capitalizeNext) {
                output += toupper(c);
                capitalizeNext = false;
            } else {
                output += c;
            }
        }
    }

    cout << output;

    return 0;
}