for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            if (i + 2 < text.size() && text[i + 1] == ' ' && text[i + 2] == ' ') {
                int j = i;
                while (j < text.size() && text[j] == ' ') {
                    text[j] = '-';
                    ++j;
                }
                i = j - 1;
            } else {
                text[i] = '_';
            }
        }
    }
    return text;
}