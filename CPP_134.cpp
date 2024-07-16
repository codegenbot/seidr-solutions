if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)) {
        if(txt.size() == 1) return true;
        if(!isalpha(txt[txt.size()-2]) && txt[txt.size()-2] != ' ') return true;
    }
    return false;
}