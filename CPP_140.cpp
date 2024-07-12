string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && result.back() == ' ' && result.size() > 1) {
                result.pop_back();
                result.pop_back();
                result += '-';
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}