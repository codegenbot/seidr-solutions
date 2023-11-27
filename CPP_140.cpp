string fix_spaces(string text){
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ' && text[i+1] == ' ' && text[i+2] == ' ') {
            text.replace(i, 3, "-");
            i--;
        } else if (text[i] == ' ') {
            text.replace(i, 1, "_");
        }
    }
    return text;
}