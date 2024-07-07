#include <cassert>
#include <string>

std::string filp_case(const std::string& str) -> const std::string {
    std::string result = str;
    for (char c : str) {
        if ((c >= 'a' && c <= 'z')) {
            result += toupper(c); // Convert to uppercase
        } else if ((c >= 'A' && c <= 'Z')) {
            result += tolower(c); // Convert to lowercase
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}