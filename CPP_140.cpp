int consecutive_spaces = 0;
    string result = "";
    
    for (char c : text) {
        if (c == ' ') {
            consecutive_spaces++;
            if (consecutive_spaces > 2) {
                result.pop_back(); // remove the last space
                result.pop_back(); // remove the second last space
                result += '-';
            } else {
                result += '_';
            }
        } else {
            result += c;
            consecutive_spaces = 0;
        }
    }
    
    return result;
}