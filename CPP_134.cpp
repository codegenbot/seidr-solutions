if(txt.empty()) return false;
    char lastChar = txt.back();
    return isalpha(lastChar) && !isalnum(txt[txt.size()-2]);
}