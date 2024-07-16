string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char new_char = (c - 'a' + 2) * 2 % 26 + 'a';
            encrypted += new_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}