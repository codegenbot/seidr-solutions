if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        int i = txt.size() - 2;
        while (i >= 0 && txt[i] != ' ') {
            i--;
        }
        return i < 0;
    }
    
    return false;
}