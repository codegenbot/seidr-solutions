if (txt.empty()) return false;
    
    char lastChar = txt.back();
    if (!isalpha(lastChar)) return false;
    
    for (int i = txt.size() - 2; i >= 0; i--) {
        if (txt[i] == ' ') return true;
        if (isalpha(txt[i])) return false;
    }
    
    return true;
}