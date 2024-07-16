string result = "";
    int count = 0;
    bool consecutive = false;
    
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                if (!consecutive) {
                    result += "-";
                    consecutive = true;
                }
            } else {
                result += '_';
            }
        } else {
            result += c;
            count = 0;
            consecutive = false;
        }
    }
    
    return result;
}