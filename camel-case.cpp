int main() {
    string input;
    getline(cin, input);

    bool capitalize = false;
    for (char& c : input) {
        if (c == '-') {
            capitalize = true;
            continue;
        }
        if (capitalize && c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
            capitalize = false;
        }
    }

    cout << input;

    return 0;
}