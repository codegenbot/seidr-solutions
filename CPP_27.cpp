```cpp
bool filp_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if(std::isalpha(c)) { 
            if (std::isupper(c)) {
                result += std::tolower(c);
            } else if (std::islower(c)) {
                result += std::toupper(c);
            }
        } else { 
            result += c;
        }
    }
    return true; 
}