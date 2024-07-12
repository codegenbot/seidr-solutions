int main() {
    string input;
    getline(cin, input);

    bool capitalize = false;

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '-') {
            capitalize = true;
        } else if (input[i] == ' ') {
            capitalize = false;
        } else {
            if (capitalize && islower(input[i])) {
                input[i] = toupper(input[i]);
            }
        }
    }

    cout << input << endl;

    return 0;
}