string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char new_char = c + 2 * ('z' - c) + 1;
            if (islower(c) && new_char > 'z') {
                new_char = 'a' + (new_char - 'z' - 1);
            } else if (isupper(c) && new_char > 'Z') {
                new_char = 'A' + (new_char - 'Z' - 1);
            }
            encrypted += new_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}