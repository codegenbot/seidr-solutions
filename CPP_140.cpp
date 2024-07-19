string result = "";
    int consecutiveSpaces = 0;
    
    for (char c : text) {
        if (c == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result += "-";
            } else {
                result += "_";
            }
        } else {
            consecutiveSpaces = 0;
            result += c;
        }
    }
    
    return result;
}