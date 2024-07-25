if(txt.empty()) return false;
char last_char = txt.back();
return isalpha(last_char) && (txt.size() == 1 || txt[txt.size()-2] == ' ');