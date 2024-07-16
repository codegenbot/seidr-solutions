if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        int spacePos = txt.find_last_of(' ');
        if (spacePos == string::npos || spacePos < txt.size() - 1) {
            return true;
        }
    }
    
    return false;
}