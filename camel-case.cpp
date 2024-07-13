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
                    if (!result.empty() && !isNextUpper) {
                        result += ' ';
                    }
                }
            }
            isNextUpper = true;
        } else {
            isNextUpper = false;
            result += (c >= 'a' && c <= 'z') ? std::toupper(c) : c;

            // Check if the last character was uppercase
            if (result.size() > 0 && isupper(result.back())) {
                result.push_back(std::tolower(c));
            } else {
                result += c;
            }
        }
    }
    return result;
}