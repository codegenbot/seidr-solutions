for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            if (i + 2 < text.length() && text[i + 1] == ' ' && text[i + 2] == ' ') {
                text.replace(i, text.find_first_not_of(' ', i + 1) - i, "-");
            } else {
                text[i] = '_';
            }
        }
    }
    return text;
}