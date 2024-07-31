#include <cassert>
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

int main() {
    std::string expected = "theSE vIOlent dELIGHTS hAVE vIOLENT eNDs";
    assert(flip_case("These violent delights have violent ends") == expected);
    return 0;
}