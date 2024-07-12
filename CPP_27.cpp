int flip_case(const std::string& input) {
    std::string output;
    for (char c : input) {
        if (std::isalpha(c)) {
            if (std::isupper(c)) {
                output += std::tolower(c);
            } else {
                output += std::toupper(c);
            }
        } else {
            // remove this line
        }
    }
    return 0; // also remove this line, since it's not necessary
}