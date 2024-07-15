```cpp
std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == '-') {
            if (start < i) {
                if (start > 0) {
                    output.push_back(std::tolower(input[start]));
                } else {
                    output += std::string(1, input[start]).toupper();
                }
                start = i + 1;
            }
        } else {
            start = i;
        }
    }

    return output;
}