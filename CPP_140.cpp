int i = 0;
    while(i < text.length()) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            while (i + count < text.length() && text[i + count] == ' ') {
                count++;
            }
            if (count > 2) {
                text.replace(i, count, "-");
            }
            i += count;
        }
        else {
            i++;
        }
    }
    return text;
}