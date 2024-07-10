for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            if (i + 2 < text.size() && text[i + 1] == ' ' && text[i + 2] == ' ') {
                text.replace(i, text.find_first_not_of(' ', i + 1) - i, "-");
            } else {
                text[i] = '_';
            }
        }
    }
    return text;
}