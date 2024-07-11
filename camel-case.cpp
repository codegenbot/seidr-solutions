```
std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                output += toupper(c);
            } else {
                firstWord = false;
            }
        } else if (c == ' ') {
            continue;
        } else {
            if (!firstWord) {
                output.push_back(tolower(c));
            } else {
                output += toupper(c);
                firstWord = false;
            }
        }
    }

    return output;
}