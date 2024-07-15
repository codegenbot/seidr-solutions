std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || (input[i] == '-' && (i == 0 || input[i - 1] != '-'))) {
            if (start < i) {
                output += std::string(input.substr(start, i - start)).substr(0, 1).toupper() + std::string(input.substr(start, i - start)).substr(1);
            }
            if (i < input.size()) {
                start = i + 1;
            } else {
                return output;
            }
        }
    }

    return output;
}