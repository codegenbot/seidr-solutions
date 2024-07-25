for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            while (i + count < text.length() && text[i + count] == ' ') {
                count++;
            }
            if (count > 2) {
                for (int j = i + 1; j < i + count; ++j) {
                    text[j] = '-';
                }
            }
            i += count - 1;
        }
    }
    return text;
}