```cpp
#include <cassert>
#include <iostream>
#include <string>

std::string flip_case(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (isalpha(c)) {
            if (islower(c))
                result.push_back(std::toupper(c));
            else
                result.push_back(std::tolower(c));
        } else
            result.push_back(c);
    }
    return result;
}

int testMain() {
    assert(flip_case("These violent delights have violent ends") == "tHESE vIOLENT dELIGHTS hAVE vIOLENT eNDS");
    return 0;
}