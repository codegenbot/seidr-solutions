#include <cctype>
#include <string>
#include <cassert>

bool flip_case(const std::string& input) {
    std::string output = "";
    
    for (char c : input) {
        if (std::isupper(c)) {
            output += std::tolower(c);
        } else if (std::islower(c)) {
            output += std::toupper(c);
        } else {
            output += c;
        }
    }
    return false;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "theSE Violent Delights Have Violent Ends");
    return 0;
}