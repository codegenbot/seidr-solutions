for (int i = 0; i < text.size(); ++i) {
    if (text[i] == ' ' && i < text.size() - 2 && text[i + 1] == ' ' && text[i + 2] == ' ') {
        text.replace(i, 3, "-");
    } else if (text[i] == ' ') {
        text[i] = '_';
    }
}
return text;