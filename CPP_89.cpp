string encrypted = "";
    int shift = 2 * 2;

    for (char c : s) {
        if (isalpha(c)) {
            char new_char = c + shift;
            if (islower(c)) {
                if (new_char > 'z') {
                    new_char = 'a' + (new_char - 'z' - 1);
                }
            } else {
                if (new_char > 'Z') {
                    new_char = 'A' + (new_char - 'Z' - 1);
                }
            }
            encrypted += new_char;
        } else {
            encrypted += c;
        }
    }

    return encrypted;
}