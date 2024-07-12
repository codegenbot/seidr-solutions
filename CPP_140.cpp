int i = 0, j = 0;
while (j < text.size()) {
    if (text[j] == ' ') {
        if (i > 0 && text[i-1] == ' ' && text[i] == ' ') {
            while (j < text.size() && text[j] == ' ')
                j++;
            text[i++] = '-';
        } else {
            text[i++] = '_';
        }
    } else {
        text[i++] = text[j++];
    }
}
return text.substr(0, i);