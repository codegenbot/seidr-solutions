for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            while (i + 1 < text.length() && text[i + 1] == ' ') {
                text[i + 1] = '-';
                ++i;
                ++count;
            }
            if (count > 2) {
                for (int j = i - count + 1; j <= i; ++j) {
                    text[j] = '-';
                }
            }
        }
    }
    return text;
}