if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    
    if (isalpha(lastChar)) {
        size_t found = txt.find_last_of(" ");
        if (found == string::npos || found == txt.size() - 1) {
            return true;
        }
    }
    
    return false;
}