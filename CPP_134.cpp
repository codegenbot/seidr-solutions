if (txt.empty()) return false;
    char last_char = txt.back();
    return isalpha(last_char) && (txt.length() == 1 || txt[txt.length() - 2] == ' ');
}