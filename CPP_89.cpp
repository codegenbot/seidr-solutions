string encrypted = "";
    int shift = 2;
    for (char c : s) {
        if (isalpha(c)) {
            char new_char = (tolower(c) - 'a' + shift * 2) % 26 + 'a';
            encrypted += isupper(c) ? toupper(new_char) : new_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}