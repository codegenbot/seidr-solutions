int main() {
    string input;
    getline(cin, input);

    bool flag = false;
    for (char &c : input) {
        if (c == '-') {
            flag = true;
            continue;
        }
        if (flag) {
            c = toupper(c);
            flag = false;
        }
    }

    cout << input << endl;

    return 0;
}