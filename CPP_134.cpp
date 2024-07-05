if (txt.empty() || txt.back() == ' ')
        return false;
    int n = txt.length();
    if (isalpha(txt[n - 1])) {
        for (int i = n - 2; i >= 0; --i) {
            if (txt[i] == ' ')
                return true;
            if (isalpha(txt[i]))
                return false;
        }
    }
    return false;
}