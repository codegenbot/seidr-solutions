if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    
    if (isalpha(lastChar)) {
        int spacePos = txt.find_last_of(' ');
        
        if (spacePos == string::npos) {
            return true;
        } else {
            return spacePos == txt.length() - 1;
        }
    }
    
    return false;
}