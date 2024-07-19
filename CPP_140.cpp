string result;
    bool hasConsecutiveSpaces = false;
    
    for(char c : text) {
        if(c == ' ') {
            if(hasConsecutiveSpaces) {
                result.pop_back();
                result.push_back('-');
            } else {
                result.push_back('_');
            }
            hasConsecutiveSpaces = true;
        } else {
            result.push_back(c);
            hasConsecutiveSpaces = false;
        }
    }
    
    return result;
}