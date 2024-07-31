string result = "";
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result.pop_back();
                result.pop_back();
                result += '-';
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