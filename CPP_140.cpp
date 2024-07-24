std::string fix_spaces(const std::string &text) {
    int count = 0;
    std::string modified_text = text;
    
    for (size_t i = 0; i < modified_text.size(); ++i) {
        if (modified_text[i] == ' ') {
            count++;
            if (count > 2) {
                modified_text[i] = '-';
            }
        } else {
            count = 0;
        }
    }
    for (size_t i = 0; i < modified_text.size(); ++i) {
        if (modified_text[i] == ' ') {
            modified_text[i] = '_';
        }
    }
    return modified_text;
}