#include <string>
#include <cassert>

std::string filp_case(const std::string& str) -> const std::string {
    std::string result;
    for (char c : str) {
        if ((c >= 'a' && c <= 'z')) {
            result += static_cast<char>(c - 32); // Convert to uppercase
        } else if ((c >= 'A' && c <= 'Z')) {
            result += static_cast<char>(c + 32); // Convert to lowercase
        } else {
            result += c; // Add the character as is
        }
    }
    return result;
}

int main() {
    assert(filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}