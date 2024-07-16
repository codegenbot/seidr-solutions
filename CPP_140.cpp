string fix_spaces(string text){
    string result;
    bool consecutiveSpaces = false;
    
    for (char c : text) {
        if (c == ' ') {
            if (!consecutiveSpaces) {
                result += '_';
                consecutiveSpaces = true;
            } else {
                result.pop_back();
                result += '-';
            }
        } else {
            result += c;
            consecutiveSpaces = false;
        }
    }
    
    return result;
}