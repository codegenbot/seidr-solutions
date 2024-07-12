```
#include <cstddef>
#include <string>
#include <cassert>

std::string filp_case(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(filp_case("These violent delights have violent ends") == "these Violent Delights Have Violent Ends");
    return 0;
}