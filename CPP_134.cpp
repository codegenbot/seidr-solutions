int n = txt.size();
if (n == 0) return false;
char lastChar = txt[n - 1];
if (isalpha(lastChar)) {
    if (n > 1 && txt[n - 2] == ' ') {
        return true;
    }
}
return false;
}