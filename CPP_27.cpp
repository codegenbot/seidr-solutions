```cpp
#include <iostream>
#include <cctype>

bool filp_case(const std::string& input) {
    std::string output = "";
    
    for (char c : input) {
        if (isupper(c)) {
            output += tolower(c);
        } else if (islower(c)) {
            output += toupper(c);
        } else {
            output += c;
        }
    }
    return output == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS";
}