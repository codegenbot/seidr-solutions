int len = txt.length();
if (len == 0) return false;
char lastChar = txt[len - 1];
if (isalpha(lastChar)) {
    if (len > 1 && txt[len - 2] == ' ') {
        return true;
    }
}
return false;
}