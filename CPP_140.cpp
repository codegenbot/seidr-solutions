string result;
    int spaceCount = 0;
    for(char c : text) {
        if(c == ' ') {
            spaceCount++;
        } else {
            if(spaceCount == 1) {
                result += '_';
            } else if(spaceCount > 1) {
                result += '-';
            }
            result += c;
            spaceCount = 0;
        }
    }
    if(spaceCount == 1) {
        result += '_';
    } else if(spaceCount > 1) {
        result += '-';
    }
    return result;
}