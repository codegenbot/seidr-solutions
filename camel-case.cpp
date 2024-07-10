std::string camelCase(const std::string& s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-' || c == ' ') {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += c;
            }
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}