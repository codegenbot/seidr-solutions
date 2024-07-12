int main() {
    string input;
    getline(cin, input);

    string result = "";
    bool capitalizeNext = false;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (c == ' ') {
            capitalizeNext = false;
            result += ' ';
        } else {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += c;
            }
        }
    }

    cout << result << endl;

    return 0;
}