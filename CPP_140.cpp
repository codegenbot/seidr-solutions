string result = "";
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result.pop_back();
                result.pop_back();
                result += "-";
                count = 1;
            } else {
                result += "_";
            }
        } else {
            result += c;
            count = 0;
        }
    }
    return result;
}