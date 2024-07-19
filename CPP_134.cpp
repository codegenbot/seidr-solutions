int main() {
    string txt;
    cout << "Enter a string: ";
    cin >> txt;
    bool result = check_if_last_char_is_a_letter(txt);
    cout << "Result: " << (result ? "true" : "false") << endl;
    return 0;
}

bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)) {
        for(int i = 0; i < txt.length() - 1; i++) {
            if(!isspace(txt[i]) && !isalpha(txt[i])) {
                return false;
            }
        }
    }
    return true;
}