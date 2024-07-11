int main() {
    string input;
    getline(cin, input);
    bool capitalize = true;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '-') {
            capitalize = true;
        } else if (input[i] != ' ') {
            if (capitalize) {
                cout << (char)toupper(input[i]);
                capitalize = false;
            } else {
                cout << input[i];
            }
        }
    }
    return 0;
}