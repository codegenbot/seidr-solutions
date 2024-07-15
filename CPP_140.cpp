for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            if (i < text.size() - 2 && text[i + 1] == ' ' && text[i + 2] == ' ') {
                int j = i + 1;
                while (j < text.size() && text[j] == ' ') {
                    text[j] = '-';
                    ++j;
                }
            }
        }
    }
    return text;
}