```
string fix_spaces(string text) {
    string result = "";
    bool spaceFound = false;

    for (char c : text) {
        if (c == ' ') {
            if (!spaceFound) {
                result += '_';
                spaceFound = true;
            } else if (result.size() > 1 && result.back() == ' ') {
                result.pop_back();
                result += '-';
            }
        } else {
            result += c;
            spaceFound = false;
        }
    }

    return result;
}