for (int i = 0; i < text.size(); ++i) {
    if (text[i] == ' ') {
        text[i] = '_';
    }
}
for (int i = 0; i < text.size() - 2; ++i) {
    if (text[i] == ' ' && text[i + 1] == ' ' && text[i + 2] == ' ') {
        text.replace(i, 3, "-");
    }
}
return text;