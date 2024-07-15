std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == '-') {
            if (start < i) {
                if (start > 0) {
                    output += std::string(1, input[start]).toupper();
                }
                output += std::string(&input[start + 1], i - start).substr(0, 1).toupper() + &input[start + 1].substr(1);
                start = i + 1;
            } else {
                if (i < input.size()) {
                    if (input[i + 1] == '-') continue;
                    output.push_back(std::tolower(input[i]));
                    start = i + 1;
                } else {
                    return output;
                }
            }
        }
    }

    return output;
}