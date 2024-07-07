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
    bool isLetter = isalpha(lastChar);
    return !isalpha(lastChar) || (txt.find(lastChar) != string::npos && txt.find(lastChar) < txt.size() - 1);
}