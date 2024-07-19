int n = txt.size();
    if (n == 0)
        return false;
    char last_char = txt[n - 1];
    if (isalpha(last_char)) {
        if (n >= 2 && txt[n - 2] == ' ')
            return true;
        else if (n == 1)
            return true;
    }
    return false;
}