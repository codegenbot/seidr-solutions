int main() {
    string input;
    getline(cin, input);

    bool flag = false;
    for (char c : input) {
        if (c == '-') {
            flag = true;
            continue;
        }
        if (flag) {
            cout << (char)toupper(c);
            flag = false;
        } else {
            cout << c;
        }
    }

    return 0;
}