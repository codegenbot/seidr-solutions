for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            text.replace(i, 1, "_");
            if (i + 1 < text.size() && text[i + 1] == ' ') {
                text.replace(i, 2, "-");
                i--;
            }
        }
    }
    return text;
}