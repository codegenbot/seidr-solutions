for (int i = 0; i < text.length(); ++i) {
    if (text[i] == ' ') {
        if (i < text.length() - 2 && text[i + 1] == ' ' && text[i + 2] == ' ') {
            text[i] = '_';
            for (int j = i + 1; j < text.length(); ++j) {
                if (text[j] != ' ') break;
                text[j] = '-';
            }
        } else {
            text[i] = '_';
        }
    }
}
return text;
}