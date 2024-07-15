if(txt.empty()) return false;
    char last_char = txt.back();
    return isalpha(last_char) && !isalnum(txt[txt.size()-2]);
}