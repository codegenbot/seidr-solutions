std::string kebabToCamel(const std::string& input) {
    std::string result = "";
    bool capitalizeNext = true;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '-') {
            if (!result.empty()) {
                if (capitalizeNext) {
                    result.push_back(' ');
                    capitalizeNext = false;
                }
            } else {
                capitalizeNext = true;
            }
        } else if (capitalizeNext) {
            result += std::toupper(input[i]);
            capitalizeNext = false;
        } else {
            result += std::tolower(input[i]);
        }
    }

    if (!result.empty() && !capitalizeNext) {
        result[0] = std::tolower(result[0]);
    }

    return result;
}