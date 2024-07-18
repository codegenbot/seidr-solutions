string result = "";
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                if (result.back() != '-') {
                    result += '-';
                }
            }
        } else {
            if (count > 2) {
                result += '-';
            } else {
                result += (count > 0) ? '_' : c;
            }
            count = 0;
        }
    }
    if (count > 2) {
        result += '-';
    } else {
        result += (count > 0) ? '_' : text.back();
    }
    return result;
}