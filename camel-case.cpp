std::string kebabToCamel(std::string str) {
    std::string result = "";
    bool capitalizeNext = false;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                result.push_back(' ');
            }
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}