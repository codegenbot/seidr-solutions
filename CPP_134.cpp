int n = txt.size();
    return (n > 0) && isalpha(txt[n - 1]) && (n < 2 || txt[n - 2] == ' ');
}