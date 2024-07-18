int n = txt.length();
if (n == 0) return false;
char lastChar = txt[n - 1];
if (isalpha(lastChar)) {
    if (n == 1) return true;
    if (txt[n - 2] == ' ') return true;
}
return false;
}