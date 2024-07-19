string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            char encrypted_char = s[i] + 2 * 2;
            if (islower(s[i])) {
                if (encrypted_char > 'z') {
                    encrypted_char = 'a' + (encrypted_char - 'z' - 1);
                }
            } else {
                if (encrypted_char > 'Z') {
                    encrypted_char = 'A' + (encrypted_char - 'Z' - 1);
                }
            }
            result += encrypted_char;
        } else {
            result += s[i];
        }
    }
    return result;
}