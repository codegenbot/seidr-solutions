if (txt.empty()) return false;
    int n = txt.size();
    char lastChar = txt[n-1];
    return isalpha(lastChar) && (n < 2 || txt[n-2] == ' ');
}