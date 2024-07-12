int main() {
    string input, output;
    getline(cin, input);

    bool capitalizeNext = false;
    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else {
            if (capitalizeNext) {
                output += toupper(c);
                capitalizeNext = false;
            } else {
                output += c;
            }
        }
    }

    if (output.length() > 0) {
        if (capitalizeNext) {
            output[0] = toupper(output[0]);
        } else {
            output[0] = tolower(output[0]);
        }
    }

    cout << output << endl;

    return 0;
}