if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        size_t pos = txt.find_last_of(" ");
        if (pos == string::npos) {
            return true;
        }
        for (size_t i = pos + 1; i < txt.size(); i++) {
            if (!isalpha(txt[i])) {
                return true;
            }
        }
    }
    
    return false;
}