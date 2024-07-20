string result = "";
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result += "-";
                count = 1;
            }
        } else {
            if (count > 2) {
                result += "-";
            } else {
                for (int i = 0; i < count; i++) {
                    result += '_';
                }
            }
            count = 0;
            result += c;
        }
    }
    if (count > 2) {
        result += "-";
    } else {
        for (int i = 0; i < count; i++) {
            result += '_';
        }
    }
    return result;
}