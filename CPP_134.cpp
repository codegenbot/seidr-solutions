int n = txt.size();
    if (n == 0) return false;
    char last_char = txt[n - 1];
    if (!isalpha(last_char)) return false;
    if (n > 1 && isalpha(txt[n - 2])) return false;
    return true;
}