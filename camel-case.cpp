std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || (input[i] == '-' && input[i - 1] != ' ')) {
            if (start < i) {
                output += std::string(1, std::tolower(static_cast<char>(input[start])));
                for (size_t j = start + 1; j < i; ++j) {
                    output += input[j];
                }
            }
            if (i < input.size()) {
                if (start >= i || input[i] != '-') {
                    output.push_back(toupper(input[i]));
                    start = i + 1;
                } else {
                    start = i + 1;
                }
            } else {
                return output;
            }
        }
    }

    return output;
}