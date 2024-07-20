if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    
    if (isalpha(lastChar)) {
        size_t lastSpace = txt.find_last_of(' ');
        if (lastSpace == string::npos || lastSpace < txt.size() - 1) {
            return true;
        }
    }
    
    return false;
}