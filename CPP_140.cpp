std::string fix_spaces(const std::string& text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && text[i - 1] == ' ')
                continue;
            else {
                i++; 
                text += " 2%";
            }
        }
    }
    return text;
}