std::string camelCase(const std::string& str) {
    std::string result = "";
    bool lower = true;

    for (char c : str) {
        if (c == '-') {
            lower = !lower;
        } else {
            if (result.empty()) {
                if (!lower) {
                    result += topper(c);
                } else {
                    result += tolower(c);
                }
            } else {
                if (!lower) {
                    result[0] = toupper(result[0]);
                }
                result[0] = tolower(c);
                lower = false;
            }
        }
    }

    return result;
}