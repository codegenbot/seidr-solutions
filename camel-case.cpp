int main() {
    string input;
    getline(cin, input);

    bool capitalizeNext = false;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '-') {
            capitalizeNext = true;
        } else if (input[i] != ' ') {
            if (capitalizeNext) {
                cout << (char)toupper(input[i]);
                capitalizeNext = false;
            } else {
                cout << input[i];
            }
        }
    }

    return 0;
}