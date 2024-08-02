for (int i = 0; i < text.size(); ++i) {
    if (text[i] == ' ') {
        text[i] = '_';
        int count = 1;
        for (int j = i + 1; j < text.size() && text[j] == ' '; ++j) {
            text[j] = '-';
            ++count;
        }
        if (count > 2) {
            for (int k = i + 1; k < text.size() && text[k] == '-'; ++k) {
                text[k] = '-';
            }
        }
    }
}
return text;