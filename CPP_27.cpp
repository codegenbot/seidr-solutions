```cpp
#include <iostream>
#include <cctype>

bool filp_case(const std::string& input) {
    std::string output = "";
    
    for (const char& c : input) {
        if (std::isupper(c)) {
            output += std::tolower(c);
        } else if (std::islower(c)) {
            output += std::toupper(c);
        } else {
            output += c;
        }
    }
    return output == "these violent delights have violent ends";
}