std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            output += (firstWord ? "" : "") + ' ';
            firstWord = false;
        } else if (c == ' ') {
            output += (firstWord ? "" : "") + ' ';
            firstWord = true;
        } else {
            output += toupper(c);
            firstWord = true;
        }
    }

    return output;
}