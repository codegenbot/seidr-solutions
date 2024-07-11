if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        size_t lastSpace = txt.find_last_of(' ');
        if (lastSpace == string::npos) {
            return true;
        } else {
            return lastSpace == txt.size() - 1;
        }
    }
    
    return false;
}