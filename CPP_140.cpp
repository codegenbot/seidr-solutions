string result = "";
    bool isPrevSpace = false;
    int spaceCount = 0;
    for (char c : text) {
        if (c == ' ') {
            spaceCount++;
            if (spaceCount > 2) {
                if (!isPrevSpace) {
                    result += "-";
                    isPrevSpace = true;
                }
            } else {
                result += "_";
                isPrevSpace = true;
            }
        } else {
            result += c;
            isPrevSpace = false;
            spaceCount = 0;
        }
    }
    return result;
}