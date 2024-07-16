for (int i = 0; i < text.size(); ++i) {
    if (text[i] == ' ') {
        if (i > 0 && text[i - 1] == ' ') {
            text.replace(i, 1, "-");
            while (i + 1 < text.size() && text[i + 1] == ' ') {
                text.erase(i + 1, 1);
            }
        } else {
            text.replace(i, 1, "_");
        }
    }
}
return text;
}