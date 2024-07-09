string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ') {
            if (i + 1 < text.size() && text[i+1] == ' ' && text[i-1] != ' ') {
                result += "-";
            } else if (result.back() == ' ') {
                continue;
            }
            result += '_';
        } else {
            result += text[i];
        }
    }
    return result;
}