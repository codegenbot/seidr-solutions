for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ' && i + 1 < text.size() && text[i + 1] == ' ') {
            text.replace(i, text.find_first_not_of(' ', i + 1) - i, "-");
            i = text.find_first_not_of('-', i + 1) - 1;
        } else if (text[i] == ' ') {
            text.replace(i, 1, "_");
        }
    }
    return text;
}