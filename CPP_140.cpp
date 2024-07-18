for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ' && i + 2 < text.size() && text[i+1] == ' ' && text[i+2] == ' ') {
            while (i < text.size() && text[i] == ' ') {
                text[i] = '-';
                ++i;
            }
            --i;
        } else if (text[i] == ' ') {
            text[i] = '_';
        }
    }
    return text;
}