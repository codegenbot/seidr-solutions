```cpp
#include <string>
#include <cctype>

bool flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (std::isupper(c)) {
            result += std::tolower(c);
        } else if (std::islower(c)) {
            result += std::toupper(c);
        } else {
            result += c;
        }
    }
    return true;  
}

assert(flip_case("These violent delights have violent ends") == "tHEse ViOlEnT dElIgHts HaVe ViOlEnT EnDs");