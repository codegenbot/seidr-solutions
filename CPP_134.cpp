if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    
    return isalpha(lastChar) && txt.find_last_of(" ") == txt.size() - 1;
}