for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            int count = 1;
            while (i + count < text.length() && text[i + count] == ' ') {
                ++count;
            }
            if (count > 2) {
                text.replace(i, count, "-");
            } else {
                text[i] = '_';
            }
        }
    }
    return text;
}