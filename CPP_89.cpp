string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char new_char = c + 2 * (c >= 'a' ? 1 : -1);
            if ((c >= 'a' && new_char > 'z') || (c <= 'Z' && new_char > 'Z')) {
                new_char -= 26;
            }
            encrypted += new_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}