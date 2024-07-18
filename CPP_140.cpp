int count = 0;
    string result = "";
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result.pop_back(); // Remove the last space
                result += "-";
                count = 1; // Reset count to 1 for the current space
            } else {
                result += "_";
            }
        } else {
            result += c;
            count = 0; // Reset count if non-space character is encountered
        }
    }
    return result;
}