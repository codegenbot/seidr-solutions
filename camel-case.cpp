std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            output += (firstWord ? "" : "") + toupper(c + 1);
            firstWord = false;
        } else if (c == ' ') {
            output += (firstWord ? "" : "") + std::string(" ");
            firstWord = true;
        } else {
            output += c;
            firstWord = true;
        }
    }

    return output;
}