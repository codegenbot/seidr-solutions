for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            if (i < text.length() - 2 && text[i + 1] == ' ' && text[i + 2] == ' ') {
                text.replace(i, 3, "-");
            } else {
                text[i] = '_';
            }
        }
    }
    return text;
}