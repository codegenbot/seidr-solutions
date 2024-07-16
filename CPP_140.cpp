for (int i = 0; i < text.size(); ++i) {
    if (text[i] == ' ') {
        if (i + 2 < text.size() && text[i + 1] == ' ' && text[i + 2] == ' ') {
            text[i] = '_';
            text[i + 1] = '_';
            for (int j = i + 2; j < text.size() && text[j] == ' '; ++j) {
                text[j] = '-';
            }
            break;
        } else {
            text[i] = '_';
        }
    }
}
return text;