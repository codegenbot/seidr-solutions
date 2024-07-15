if(txt.empty()) return false;
if(isalpha(txt.back()) && txt.find_last_of(' ') == txt.size()-1) return true;
return false;