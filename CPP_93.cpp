string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char new_c;
            if (c >= 'a' && c <= 'z') {
                new_c = 'a' + (c - 'a' + 2) % 26;
            } else {
                new_c = 'A' + (c - 'A' + 2) % 26;
            }
            result += tolower(isupper(c) ? new_c : toupper(new_c));
        } else {
            result += c;
        }
    }
    return result;
}