string result = "";
    bool isPrevSpace = false;
    
    for (char c : text) {
        if (c == ' ') {
            if (!isPrevSpace) {
                result += '_';
            } else {
                result += '-';
            }
            isPrevSpace = true;
        } else {
            result += c;
            isPrevSpace = false;
        }
    }
    
    return result;
}