#include <cassert>
#include <iostream>
#include <string>

std::string flip_case(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (isalpha(c)) {
            if (islower(c))
                result += toupper((char)c);
            else
                result += tolower((char)c);
        } else
            result += c;
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE vIOLENT dELIGHTS hAVE vIOLENT eNDS");
    std::cout << flip_case("Hello, World!") << std::endl;
    return 0;
}