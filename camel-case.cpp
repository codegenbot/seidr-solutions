int main() {
    string input, word;
    while (cin >> input) {
        bool new_word = true;
        for (char c : input) {
            if (c == '-') {
                new_word = true;
            } else {
                if (new_word) {
                    cout << (char)toupper(c);
                    new_word = false;
                } else {
                    cout << c;
                }
            }
        }
        cout << " ";
    }
    return 0;
}