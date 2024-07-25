for (int i = 0; i < text.size(); ++i) {
    if (text[i] == ' ') {
        if (i >= 2 && text[i-1] == ' ' && text[i-2] == ' ') {
            text.replace(i-2, 3, "-");
            i -= 2;
        } else {
            text[i] = '_';
        }
    }
}
return text;