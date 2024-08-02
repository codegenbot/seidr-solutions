int main() {
    string txt;
    cin >> txt;
    cout << (check_if_last_char_is_a_letter(txt) ? "true" : "false");
    return 0;
}

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) {
        return false;
    }
    char lastChar = txt.back();
    return isalpha(lastChar) && !isalnum(lastChar);
}