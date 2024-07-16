int n = txt.size();
if (n == 0) return false;
char lastChar = txt[n - 1];
if (!isalpha(lastChar)) return false;
if (n >= 2 && txt[n - 2] != ' ') return false;
return true;
}