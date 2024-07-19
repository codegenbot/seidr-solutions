string fix_spaces(string text){
    string result = "";
    bool prevSpace = false;

    for (char c : text) {
        if (c == ' ') {
            if (!prevSpace) {
                result += '_';
                prevSpace = true;
            } else if (result.size() > 1 && result.back() == '_') {
                result.pop_back();
                result += '-';
                prevSpace = false;
            }
        } else {
            result += c;
            prevSpace = false;
        }
    }

    return result;
}