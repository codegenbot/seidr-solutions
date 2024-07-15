if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    
    if (isalpha(lastChar)) {
        if (txt.size() == 1) {
            return true;
        } else {
            size_t pos = txt.find_last_of(" ");
            if (pos == string::npos || pos == txt.size() - 1) {
                return true;
            }
        }
    }
    
    return false;
}