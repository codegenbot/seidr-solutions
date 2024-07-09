```cpp
#include <string>
#include <cassert>

std::string flip_case(const std::string& s) {
    std::string result = "";
    for (auto c = s.begin(); c != s.end(); ++c) {
        if (isalpha(*c)) {
            *c = (islower(*c)) ? toupper(*c) : tolower(*c);
        }
        result += *c;
    }
    return result;
}

int main() {
    std::string s = "These violent delights have violent ends";
    assert(flip_case(s) == "tHESE vIOLENT dELIGHTS hAVE vIOLENT eNDS");
    return 0;
}