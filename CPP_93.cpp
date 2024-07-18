string encode(string message) {
    string encoded_message = "";
    for (char c : message) {
        if (isalpha(c)) {
            if (isupper(c)) {
                encoded_message += tolower(c);
            } else {
                encoded_message += toupper(c);
            }
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                char new_char = c + 2;
                if (new_char > 'z') {
                    new_char -= 26;
                }
                encoded_message += new_char;
            }
        } else {
            encoded_message += c;
        }
    }
    return encoded_message;
}