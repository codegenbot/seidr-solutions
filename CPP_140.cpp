for (int i = 0; i < text.length(); ++i){
        if (text[i] == ' ') {
            text[i] = '_';
            while (i + 1 < text.length() && text[i + 1] == ' ') {
                if (i + 2 < text.length() && text[i + 2] == ' ') {
                    text.replace(i, 3, "-");
                }
                else {
                    text.replace(i, 2, "_");
                }
            }
        }
    }
    return text;
}