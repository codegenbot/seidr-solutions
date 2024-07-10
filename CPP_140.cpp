string fix_spaces(string text){
    string result = "";
    bool prevSpace = false;
    
    for(char c : text){
        if(c == ' ' && !prevSpace) {
            result += '_';
            prevSpace = true;
        } else if(c == ' ' && prevSpace) {
            if(result.back() != '-') {
                result += '-';
                prevSpace = true;
            }
        } else {
            result += c;
            prevSpace = false;
        }
    }
    
    return result;
}