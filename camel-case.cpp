int main() {
    string input;
    getline(cin, input);
    bool hyphen = false;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '-') {
            hyphen = true;
            continue;
        }
        if (hyphen) {
            input[i] = toupper(input[i]);
            hyphen = false;
        }
    }
    cout << input;
    return 0;
}