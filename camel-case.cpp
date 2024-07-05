std::string camelCase(const std::string& str) {
    std::string result;

    for (char c : str) {
        if (c == '-') {
            if (!first)
                result.push_back(std::toupper(c));
            else
                first = false;
        } else if (c == ' ') {
            first = true;
            continue;
        }

        if (!first)
            result.push_back(std::tolower(c));
        else
            result.push_back(c);
        first = false;

    }
    return result;
}