string result;
    bool lastSpace = false;
    int spaceCount = 0;
    
    for (char c : text) {
        if (c == ' ') {
            spaceCount++;
            if (spaceCount > 2) {
                if (!lastSpace) {
                    result += '-';
                }
                lastSpace = true;
            } else {
                result += '_';
            }
        } else {
            result += c;
            lastSpace = false;
            spaceCount = 0;
        }
    }
    
    return result;
}