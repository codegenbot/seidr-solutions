int check_if_last_char_is_a_letter(string s) {
    if (s.length() > 0 && isalpha(s[s.length()-1]))
        return 1;
    else
        return 0;
}

int start() {
    int result = 0;
    string input;
    cin >> input;
    if (check_if_last_char_is_a_letter(input))
        cout << "The last character of the given string is a letter.\n";
    else
        cout << "The last character of the given string is not a letter.\n";
    return result;
}

int main() {
    start();
}