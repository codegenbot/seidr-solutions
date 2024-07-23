int main() {
    string input;
    getline(cin, input);
    bool flag = false;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '-') {
            flag = true;
        } else if (input[i] == ' ' && flag) {
            flag = false;
        } else if (flag || i == 0) {
            cout << (char)toupper(input[i]);
            flag = false;
        } else {
            cout << input[i];
        }
    }
    return 0;
}