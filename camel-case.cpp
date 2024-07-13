std::string camelCase(std::string str) {
    std::string result = "";
    bool isNextUpper = false;
    for (const auto& c : str) {
        if (c == '-' || c == ' ') {
            if (!isNextUpper) {
                if (c == '-') {
                    if (!result.empty()) {
                        result += std::toupper(c);
                    }
                } else {
                    if (c != ' ' && !isNextUpper) {
                        result += ' ';
                    }
                }
            }
            isNextUpper = true;
        } else {
            isNextUpper = false;
            result += (c >= 'a' && c <= 'z') ? std::toupper(c) : c;
        }
    }
    return result;