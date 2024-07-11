```
std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            output += toupper(c + 1);
            firstWord = false;
        } else if (c == ' ') {
            firstWord = true;
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