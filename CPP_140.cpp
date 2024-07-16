for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ' && (i == 0 || text[i - 1] != ' ')) {
            text[i] = '_';
        } else if (text[i] == ' ' && text[i - 1] == ' ') {
            text.replace(i - 1, 2, "-");
            i -= 2;
        }
    }
    return text;
}