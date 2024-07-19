string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char shifted = c + 2 * 2;
            if (islower(c)) {
                if (shifted > 'z') {
                    shifted = 'a' + (shifted - 'z' - 1);
                }
            } else if (isupper(c)) {
                if (shifted > 'Z') {
                    shifted = 'A' + (shifted - 'Z' - 1);
                }
            }
            encrypted += shifted;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}