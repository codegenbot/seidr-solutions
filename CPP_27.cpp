std::string flip_case(std::string str) {
    std::string result;
    for (char &c : str) {
        c = std::toupper(c);
        if (std::islower(c)) {
            c = std::tolower(c);
        }
    }
    return str;  // return the original string instead