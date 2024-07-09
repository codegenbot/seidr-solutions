for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            for (int j = i + 1; j < text.size(); ++j) {
                if (text[j] == ' ') {
                    count++;
                } else {
                    break;
                }
            }
            if (count > 2) {
                for (int k = i + 1; k < i + count; ++k) {
                    text[k] = '-';
                }
            }
            i += count - 1;
        }
    }
    return text;
}