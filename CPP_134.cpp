int len = txt.length();
    if (len == 0 || txt[len - 1] == ' ') return false;
    if (isalpha(txt[len - 1])) return (len == 1 || txt[len - 2] == ' ');
    return false;
}

int main() {
    string input;
    getline(cin, input);
    printf(check_if_last_char_is_a_letter(input) ? "true\n" : "false\n");
    return 0;
}