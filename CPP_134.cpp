int main() {
    string txt;
    cout << "Enter a string: ";
    cin >> txt;
    bool result = check_if_last_char_is_a_letter(txt);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

bool check_if_last_char_is_a_letter(string txt) {
    int len = txt.length();
    if (len == 0) return false; // base case: empty string
    char lastChar = txt[len-1];
    return isalpha(lastChar) && !isalnum(txt[len-1]);
}