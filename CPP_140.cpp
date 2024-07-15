string result = "";
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result.pop_back(); // remove the last space
                result.pop_back(); // remove the space before that
                result += "-";
                count = 1;
            } else {
                result += '_';
            }
        } else {
            count = 0;
            result += c;
        }
    }
    return result;
}