```cpp
#include <cassert>
#include <string>
#include <cctype>

std::string flip_case(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (std::isalpha(c)) {
            if (std::islower(c))
                result += std::toupper(c);
            else
                result += std::tolower(c);
        } else
            result += c;
    }
    return result;
}

int testMain() {
    assert(flip_case("These violent delights have violent ends") == "tHESE vIOLENT dELIGHTS hAVE vIOLENT eNDS");
    return 0;
}