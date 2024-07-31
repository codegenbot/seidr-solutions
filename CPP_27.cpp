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
    return result;

}

int main() {
    assert(flip_case("These violent delights have violent ends") == "theSE vIOlent dELIGHTS hAVE vIOLENT eNDs");
    return 0;
}