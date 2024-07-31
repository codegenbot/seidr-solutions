bool flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if(std::isalpha(c)) { 
            result += (std::isupper(c))? std::tolower(c) : std::toupper(c);
        } else { 
            result += c;
        }
    }
    return true; 
}