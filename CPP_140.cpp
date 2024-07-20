string result = "";
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result.pop_back(); // Remove the last space
                result += "-";
                count = 1; // Reset count to 1
            } else {
                result += '_';
            }
        } else {
            result += c;
            count = 0; // Reset count if not a space
        }
    }
    return result;
}