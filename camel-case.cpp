std::string camelCase(const std::string& str) {
    std::string result = "";
    bool lower = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                if (!lower) {
                    result[0] = toupper(result[0]);
                }
            }
            lower = !lower;
            result += " ";
        } else {
            if (!result.empty() && !lower) {
                result[0] = toupper(result[0]);
                lower = false;
            }
            result += tolower(c);
        }
    }

    if (!lower) {
        result[0] = toupper(result[0]);
    }
    
    return result.substr(1); // Remove the extra space at the beginning
}