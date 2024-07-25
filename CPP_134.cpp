int len = txt.size();
if (len == 0) return false;
char lastChar = txt[len - 1];
if (isalpha(lastChar)) {
    if (len >= 2 && txt[len - 2] == ' ') {
        return true;
    }
}
return false;
}