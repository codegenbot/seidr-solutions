for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            text.replace(i, 1, "_");
            int count = 1;
            while (i + 1 < text.length() && text[i + 1] == ' ') {
                text.replace(i + 1, 1, "-");
                ++count;
            }
            if (count > 2) {
                text.replace(i + 1, count - 1, "-");
            }
        }
    }
    return text;
}