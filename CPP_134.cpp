if (txt.empty()) return false;
char lastChar = txt.back();
return isalpha(lastChar) && (txt.size() == 1 || txt[txt.size() - 2] == ' ');