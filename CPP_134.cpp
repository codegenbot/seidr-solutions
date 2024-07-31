if (txt.empty()) return false;
int n = txt.size();
char lastChar = txt[n - 1];
if (!isalpha(lastChar)) return false;
if (n >= 2 && isalpha(txt[n - 2])) return false;
return true;