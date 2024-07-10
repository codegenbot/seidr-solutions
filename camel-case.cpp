std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            output += (firstWord ? "" : "") + toupper(c + 1);
            firstWord = false;
        } else if (c == ' ') {
            output += (firstWord ? "" : "") + " ";
            firstWord = true;
        } else {
            if (!firstWord) {
                output += tolower(c);
                firstWord = true;
            } else {
                output += toupper(c);
                firstWord = false;
            }
        }
    }

    return output;
}