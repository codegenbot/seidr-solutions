int n = txt.size();
    if (n == 0) return false;
    char last_char = txt.back();
    return isalpha(last_char) && txt.find_last_of(" ") == (n-1);
}