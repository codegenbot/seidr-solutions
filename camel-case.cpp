std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            if (!result.empty() && isupper(result.back())) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}