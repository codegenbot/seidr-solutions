for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            int j = i + 1;
            while (j < text.size() && text[j] == ' ') {
                count++;
                j++;
            }
            if (count > 2) {
                for (int k = i + 1; k < j; ++k) {
                    text[k] = '-';
                }
            }
            i = j - 1;
        }
    }
    return text;
}