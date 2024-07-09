string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char new_c = (c >= 'a' && c <= 'z') ? c + 2 - ('a' - 'e') : c;
            new_c = (new_c > 'z') ? new_c - 26 : new_c;
            result += tolower(new_c) == c ? toupper(new_c) : tolower(new_c);
        } else {
            result += c;
        }
    }
    return result;
}