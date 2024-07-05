if (txt.empty()) return false;
    int n = txt.length();
    if (!isalpha(txt[n - 1])) return false;
    if (n > 1 && txt[n - 2] != ' ') return false;
    return true;
}