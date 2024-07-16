int main() {
    string str;
    getline(cin, str);

    bool capitalize = false;
    for (char& c : str) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize) {
                cout << (char)toupper(c);
                capitalize = false;
            } else {
                cout << c;
            }
        }
    }

    return 0;
}