int main() {
    string txt;
    cout << "Enter a string: ";
    cin >> txt;
    bool result = check_if_last_char_is_a_letter(txt);
    if (result) {
        cout << "The last character of the given string is an alphabetical character and is not part of a word." << endl;
    } else {
        cout << "The last character of the given string is not an alphabetical character or it's part of a word." << endl;
    }
    return 0;
}

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) {
        return false;
    }
    char lastChar = txt.back();
    if (!isalpha(lastChar)) {
        return false;
    }
    for (int i = 0; i < txt.size() - 1; i++) {
        if (isspace(txt[i]) && isalpha(txt[i + 1])) {
            return true;
        }
    }
    return false;
}