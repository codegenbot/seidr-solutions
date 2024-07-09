if(txt.empty()) return false;
int n = txt.size();
char last_char = txt[n-1];
return isalpha(last_char) && (n == 1 || txt[n-2] == ' ');
}