for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ' && i + 1 < text.length() && text[i + 1] == ' ') {
            text.replace(i, text.find_first_not_of(' ', i + 1) - i, "-");
        } else if (text[i] == ' ') {
            text.replace(i, 1, "_");
        }
    }
    return text;
}