string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            result += (char)((c - 'a' + 2 * 2) % 26 + 'a');
        } else if (c >= 'A' && c <= 'Z') {
            result += (char)((c - 'A' + 2 * 2) % 26 + 'A');
        } else {
            result += c;
        }
    }
    return result;
}