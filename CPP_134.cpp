if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        size_t pos = txt.find_last_of(" ");
        if(pos == string::npos || pos == txt.length() - 1) return true;
    }
    return false;
}