for (int i = 0; i < text.size(); ++i) {
    if (text[i] == ' ') {
        text[i] = '_';
        int consecutive = 1;
        while (i + 1 < text.size() && text[i + 1] == ' ') {
            text[i + 1] = '-';
            ++consecutive;
            ++i;
        }
        if (consecutive > 2) {
            for (int j = i - consecutive + 2; j <= i; ++j) {
                text[j] = '-';
            }
        }
    }
}
return text;