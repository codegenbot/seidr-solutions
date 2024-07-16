if (txt.empty()) return false;
    char lastChar = txt.back();
    if (!isalpha(lastChar)) return false;
    int i = txt.length() - 2;
    while (i >= 0 && isalpha(txt[i])) {
        i--;
    }
    return (i < 0 || txt[i] == ' ');
}