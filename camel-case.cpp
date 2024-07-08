std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-' || c == ' ') { 
            if (!capitalizeNext) {
                capitalizeNext = true;
                result += ' ';
            }
        } else {
            result += (capitalizeNext ? toupper(c) : tolower(c));
            capitalizeNext = false;
        }
    }

    return result;
}