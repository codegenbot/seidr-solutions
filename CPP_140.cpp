for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            while (i + count < text.length() && text[i + count] == ' ') {
                text[i + count] = '-';
                count++;
            }
            i += count - 1;
        }
    }
    return text;
}