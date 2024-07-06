string fix_spaces(string text) {
    string result = "";
    bool previous_space = false;

    for (char c : text) {
        if (c == ' ') {
            if (!previous_space) {
                result += '_';
                previous_space = true;
            } else if (result.size() > 1 && result.back() == ' ') {
                result.pop_back();
                result += '-';
                previous_space = false;
            }
        } else {
            result += c;
            previous_space = false;
        }
    }

    return result;
}