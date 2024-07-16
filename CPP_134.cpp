if(txt.empty()) return false;
char last_char = txt.back();
if(isalpha(last_char) && (txt.size() == 1 || txt[txt.size()-2] == ' ')) return true;
return false;
}