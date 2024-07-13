int main() {
    string input;
    getline(cin, input);

    bool capitalize = false;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '-') {
            capitalize = true;
            continue;
        }

        if (capitalize) {
            cout << (char)toupper(input[i]);
            capitalize = false;
        } else {
            cout << input[i];
        }
    }
    return 0;
}