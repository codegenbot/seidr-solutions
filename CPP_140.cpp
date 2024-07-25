string result = "";
    int consecutiveSpaces = 0;
    
    for (char c : text) {
        if (c == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result.pop_back();
                result.pop_back();
                result.push_back('-');
            } else {
                result.push_back('_');
            }
        } else {
            consecutiveSpaces = 0;
            result.push_back(c);
        }
    }
    
    return result;
}