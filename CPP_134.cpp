if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        if (txt.find_last_of(" ") == txt.size() - 1) {
            return true;
        }
    }
    
    return false;
}