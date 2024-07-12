int main() {
    string input;
    getline(cin, input);

    string output = "";
    bool capitalizeNext = false;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (c == ' ') {
            output += " ";
            capitalizeNext = false;
        } else {
            if (capitalizeNext && islower(c)) {
                output += toupper(c);
            } else {
                output += c;
            }
            capitalizeNext = false;
        }
    }

    cout << output << endl;

    return 0;
}