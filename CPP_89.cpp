string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            result += 'a' + (((c - 'a') + 2 * 2) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            result += 'A' + (((c - 'A') + 2 * 2) % 26);
        } else {
            result += c;
        }
    }
    return result;
}