for (int i = 0; i < text.size(); ++i) {
    if (text[i] == ' ') {
        if (i+1 < text.size() && text[i+1] == ' ') {
            int j = i + 1;
            while (j < text.size() && text[j] == ' ') {
                ++j;
            }
            if (j - i > 2) {
                text.replace(i, j - i, "-");
            } else {
                text[i] = '_';
            }
            i = j - 1;
        } else {
            text[i] = '_';
        }
    }
}
return text;