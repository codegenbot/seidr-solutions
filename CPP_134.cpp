int len = txt.length();
    if(len == 0) return false;
    char lastChar = txt[len-1];
    if(lastChar == ' ' || lastChar == '\0') return false;
    return isalpha(lastChar) && (len == 1 || txt[len-2] == ' ');
}