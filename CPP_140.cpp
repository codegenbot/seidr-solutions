string result;
    int consecutiveSpaces = 0;
    for (char c : text) {
        if (c == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result.pop_back(); // remove the last space
                result.push_back('-'); // add a dash
                consecutiveSpaces = 1; // reset consecutive spaces count
            } else {
                result.push_back('_'); // add an underscore
            }
        } else {
            result.push_back(c); // add the character to the result
            consecutiveSpaces = 0; // reset consecutive spaces count
        }
    }
    return result;
}