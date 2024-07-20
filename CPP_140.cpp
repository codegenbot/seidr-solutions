string result = "";
    bool lastSpace = false;
    int consecutiveSpaces = 0;
    
    for (char& c : text) {
        if (c == ' ') {
            if (lastSpace) {
                consecutiveSpaces++;
            } else {
                lastSpace = true;
                consecutiveSpaces = 1;
            }
        } else {
            if (consecutiveSpaces > 2) {
                result += "-";
            } else {
                for (int i = 0; i < consecutiveSpaces; i++) {
                    result += "_";
                }
            }
            lastSpace = false;
            consecutiveSpaces = 0;
            result += c;
        }
    }
    
    if (consecutiveSpaces > 2) {
        result += "-";
    } else {
        for (int i = 0; i < consecutiveSpaces; i++) {
            result += "_";
        }
    }
    
    return result;
}