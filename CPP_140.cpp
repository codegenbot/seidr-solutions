int count = 0;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            count++;
            if (count > 2) {
                text[i] = '-';
            }
        } else {
            count = 0;
        }
    }
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
        }
    }
    return text;
}