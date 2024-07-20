int consecutive_spaces = 0;
    string result = "";
    
    for (char c : text) {
        if (c == ' ') {
            consecutive_spaces++;
            if (consecutive_spaces > 2) {
                result.pop_back(); // remove last space
                result.pop_back(); // remove previous space
                result += "-";
            } else {
                result += '_';
            }
        } else {
            consecutive_spaces = 0;
            result += c;
        }
    }
    
    return result;
}