std::string fix_spaces(const std::string &text) {
    int count = 0;
    std::string result = text;
    for (size_t i = 0; i < text.size(); ++i) {
        if (result[i] == ' ') {
            count++;
            if (count > 2) {
                result[i] = '-';
            }
        } else {
            count = 0;
        }
    }
    for (size_t i = 0; i < result.size(); ++i) {
        if (result[i] == ' ') {
            result[i] = '_';
        }
    }
    return result;
}