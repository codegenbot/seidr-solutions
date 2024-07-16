std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = str.empty();

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else {
            result += capitalizeNext ? topper(c) : tolower(c);
            capitalizeNext = false;
        }
    }

    return result;
}