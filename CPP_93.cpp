transform(message.begin(), message.end(), message.begin(), [](char c) {
        if (isalpha(c)) {
            char new_char = (c + ((c >= 'a') ? 'A' - 'a' : 0)) ^ 32; // Swap case
            if (new_char == 'A' || new_char == 'E' || new_char == 'I' || new_char == 'O' || new_char == 'U') {
                c = new_char + 2;
            } else {
                c = new_char;
            }
        }
        return c;
    });
    return message;
}