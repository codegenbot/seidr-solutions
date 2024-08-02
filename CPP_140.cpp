string result = "";
    bool prevSpace = false;
    int count = 0;
    
    for (char c : text) {
        if (c == ' ') {
            if (prevSpace) {
                count++;
            } else {
                prevSpace = true;
                count = 1;
            }
        } else {
            if (count > 2) {
                result.pop_back();
                result.pop_back();
                result += "-";
            } else if (count > 0) {
                result += "_";
            }
            prevSpace = false;
            count = 0;
        }
        
        if (c != ' ') {
            result += c;
        }
    }
    
    if (count > 2) {
        result.pop_back();
        result.pop_back();
        result += "-";
    } else if (count > 0) {
        result += "_";
    }
    
    return result;
}