for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            while (i + 1 < text.size() && text[i + 1] == ' ') {
                text[i] = '-';
                text.erase(i + 1, 1);
            }
        }
    }
    return text;
}