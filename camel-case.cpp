std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                result.push_back(' '); // add a space
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