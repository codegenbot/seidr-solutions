for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int j = i + 1;
            while (j < text.length() && text[j] == ' ') {
                text[j] = '-';
                ++j;
            }
            i = j - 1;
        }
    }
    return text;
}