for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            if (i > 0 && text[i - 1] == ' ') {
                text[i] = '-';
            }
        }
    }
    return text;
}