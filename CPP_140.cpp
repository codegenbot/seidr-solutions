for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            text.replace(i, 1, "_");
            int consecutive_spaces = 1;
            while (i + 1 < text.length() && text[i + 1] == ' ') {
                text.replace(i + 1, 1, "-");
                ++consecutive_spaces;
            }
            if (consecutive_spaces > 2) {
                text.replace(i + 1, consecutive_spaces - 1, "-");
            }
        }
    }
    return text;
}