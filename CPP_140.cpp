for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            if (i > 0 && text[i - 1] == ' ') {
                text.replace(i, 1, "-");
                while (i < text.length() && text[i] == ' ') {
                    text.erase(i, 1);
                }
            } else {
                text.replace(i, 1, "_");
            }
        }
    }
    return text;
}