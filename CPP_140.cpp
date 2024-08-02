for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            if (i > 0 && text[i - 1] == ' ') {
                text.replace(i - 1, 2, "-");
                i--;
            } else {
                text[i] = '_';
            }
        }
    }
    return text;
}