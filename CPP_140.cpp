string result = "";
    bool found_space = false;
    int space_count = 0;
    
    for (char c : text) {
        if (c == ' ') {
            space_count++;
            if (space_count > 2) {
                if (!found_space) {
                    result += "-";
                    found_space = true;
                }
            } else {
                result += "_";
            }
        } else {
            result += c;
            found_space = false;
            space_count = 0;
        }
    }
    
    return result;
}