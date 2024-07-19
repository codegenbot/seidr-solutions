if(txt.empty())
    return false;
char last_char = txt.back();
return isalpha(last_char) && (txt.find_last_of(" ") == txt.size() - 1);