int count = 0;
    string result = "";

    for (char c : text) {
        if (c == ' ') {
            count++;
        } else {
            if (count > 2) {
                result += '-';
            } else {
                result += string(count, '_');
            }
            count = 0;
        }
        if (c != ' ') {
            result += c;
        }
    }

    if (count > 2) {
        result += '-';
    } else {
        result += string(count, '_');
    }

    return result;
}